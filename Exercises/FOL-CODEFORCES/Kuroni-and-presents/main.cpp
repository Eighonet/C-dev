#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> bracers;
    vector<int> necklaces;
    int t(0), n(0), tmp(0);
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> n;
        for (int j(0); j < n; ++j) {
            cin >> tmp;
            necklaces.push_back(tmp);
        }
        for (int j(0); j < n; ++j) {
            cin >> tmp;
            bracers.push_back(tmp);
        }
        sort(bracers.begin(), bracers.end());
        sort(necklaces.begin(), necklaces.end());
        cout << endl;
        for (int j(0); j < n; ++j) {
            cout << necklaces[j] << " ";
        }
        cout << endl;
        for (int j(0); j < n; ++j) {
            cout << bracers[j] << " ";
        }
        bracers.clear();
        necklaces.clear();
    }
    return 0;
}
