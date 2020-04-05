#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int  t(0), n(0);
    cin >> t;
    for (int j(0); j < t; ++j) {
        cin >> n;
        int tmp(0), cEven(0), cOdd(0), cR(0), vR(0);
        vector <int> a;
        vector <int> b;
        vector <int> rep;
        for (int i(0); i < n; ++i) {
            cin >> tmp;
            if (tmp % 2 == 0) {
                ++cEven;
            } else {
                ++cOdd;
            }
            a.push_back(tmp);
        }
        if ((cOdd == 1) && (cEven == 0)) {
                cout << endl << -1 << endl;
        } else {
            if (cEven == 0) {
                cout << endl << 2 << endl;
                for (int i(0); i < n; ++i) {
                    if (vR < 2) {
                        if (a[i] % 2 != 0) {
                            vR++;
                            cout << i + 1 << " ";
                        }
                    }
                }
            }
            else {
                cout << endl << 1 << endl;
                for (int i(0); i < n; ++i) {
                    if (vR < 1) {
                        if (a[i] % 2 == 0) {
                            vR++;
                            cout << i + 1 << " ";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
