#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t(0), n(0), tmp(0);
    vector<int> a;
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> n;
        for (int j(0); j < n; ++j) {
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        cout << endl;
        for (int j(n-1); j >= 0; --j) {
            cout << a[j]<< " ";
        }
        a.clear();
    }
    return 0;
}
