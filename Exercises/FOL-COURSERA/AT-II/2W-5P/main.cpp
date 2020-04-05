#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n(10);
 //   int m(0);


 //   cin >> m;

    vector<int> PisanoContainer;
    vector<int> f;

    for (int m(1); m < 17; ++m) {
        int periodPisano(0);
        int counterP(0), lengthP(3);
        PisanoContainer.clear();
        f.clear();
        f.push_back(0);
        f.push_back(1);
        f.push_back(1);

        PisanoContainer.push_back(0 % m);
    PisanoContainer.push_back(1 % m);
    PisanoContainer.push_back(1 % m);

        for (int i(3); i < 100500; ++i) {
            f.push_back(f[i - 1] + f[i - 2]);
            PisanoContainer.push_back(f[i] % m);
            if (f[i] % m == PisanoContainer[counterP]) {
                ++counterP;
            } else {
                if (counterP == 0) {
                    ++lengthP;
                } else {
                    lengthP += counterP;
                    counterP = 0;
                }
            }
            if (counterP == lengthP) {
                periodPisano = lengthP;
                break;
            }
        }
        cout << endl << periodPisano;
    }
    return 0;
}
