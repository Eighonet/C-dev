#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t(0), n(0), tmp(0), maxEx(-1), sumVal(0), countVal(0), meanVal(0);
    int valueGen(0), valueMean(0);
    vector <int> a(0);
    cin >> t;
    for (int i(2); i < t; ++i) {
        maxEx = -1; sumVal = 0; countVal = 0; meanVal = 0; a.clear();
        cin >> n;
        cin >> tmp;
        a.push_back(tmp);
        for (int z(1); z < n; ++z) {
            cin >> tmp;
            a.push_back(tmp);
            if ((a[z-1] !=-1) && (a[z] !=-1) && ((abs(a[z-1] - a[z] ) > maxEx))) {
                maxEx = abs(a[z-1] - a[z]);

            }
            if (a[z] == -1) {
                if (a[z-1] != -1) {
                    sumVal += a[z-1];
                    valueGen =a[z-1];
                    ++countVal;
                }
            }
            if (a[z-1] == -1) {
                if (a[z] != -1) {
                    sumVal += a[z];
                    ++countVal;
                }
            }
        }
        if (countVal != 0) {
            if (sumVal % countVal != 0) {
                meanVal = (sumVal / countVal)-1;
            }
            else {
                meanVal = sumVal / countVal;
            }
        }
        else {
            meanVal = 0;
        }
        if ((valueGen - meanVal) >= maxEx) {
            cout << endl << abs(valueGen - meanVal) << " " << meanVal;
        }
        else {
            cout << endl << maxEx << " " << meanVal;
        }
    }

    return 0;
}
