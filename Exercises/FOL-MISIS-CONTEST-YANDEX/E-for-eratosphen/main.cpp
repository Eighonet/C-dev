#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

void ES(int n) {
    int counter(0);
    vector<int> numbers;
    vector<bool> primes((n+1)*13 , true);
    primes[0] = primes[1] = 0;

    for (int i(2); i*i <= n*13; i +=1) {
        if (primes[i] == true) {
            if (i % 2 != 0) {
                if (i * 1ll * i <= n * 13) {
                    for (int j(i * i); j <= n * 13; j += i) {
                        primes[j] = false;
                    }
                }
            }
        }
    }

    for (int i(0); i < primes.size(); ++i) {
        if ((primes[i] == true)) {
            if ((i % 2 != 0) || (i == 2)) {
                if (counter == n-1) {
                    cout << endl << i;
                }
                ++counter;
            }
        }
    }
}


int main() {
    auto begin = std::chrono::steady_clock::now();
    int n(0), T(0);
    cin >> T;
    for (int i(0); i < T; ++i) {
        cin >> n;
        ES(n);
    }
    auto end = std::chrono::steady_clock::now();

    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    std::cout << endl << "The time: " << elapsed_ms.count() << " ms\n";
    return 0;
}
