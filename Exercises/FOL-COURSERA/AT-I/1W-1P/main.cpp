#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n(0), tmp(0), max1(0), max1Ind(0), max2(0);
    vector<int> a;
    cin >> n;

    for (int i(0); i < n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
        if (tmp > max1) {
            max1 = tmp;
            max1Ind = i;
        }
    }

    for (int i(0); i < n; ++i) {
        if (a[i] > max1) {
            max1 = a[i];
            max1Ind = i;
        }
    }

    for (int i(0); i < n; ++i) {
        if ((a[i] > max2) &&  (i != max1Ind)) {
            max2 = a[i];
        }
    }
    cout << max1*max2;
    return 0;
}
