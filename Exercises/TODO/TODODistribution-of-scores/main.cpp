#include <iostream>
#include <vector>

using namespace std;

int main() {
   long long int t(0), n(0), m(0), tmp(0), first(0), mean(0);
    cin >> t;
    for (int i(0); i < t; ++i) {
        mean = 0;
        cin >> n >> m;
        for (int j(0); j < n; ++j) {
            cin >> tmp;
            mean += tmp;
        }
        if (mean >= m) {
            cout << endl << m;
        }
        else {
            cout << endl << mean;
        }
    }
    return 0;
}
