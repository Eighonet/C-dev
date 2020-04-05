#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int n(0), tmp(0), cost(0);
    vector<int> a, b;
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i(0); i < n; ++i) {
        cost += a[i]*b[i];
    }
    cout << endl << cost;
    return 0;
}
