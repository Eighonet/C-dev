#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> ans;
    long int n(0), divisor(2);
    cin >> n;
    while (divisor <= sqrt(n)) {
        if (n % divisor == 0) {
            n /= divisor;
            ans.push_back(divisor);
//            ans.push_back(n/divisor);
        } else {
            ++divisor;
        }
    }
    for (int i(0); i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << n;
    return 0;
}
