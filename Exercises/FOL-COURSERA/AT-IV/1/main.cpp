#include <iostream>
#include <vector>

using namespace std;

int bs (vector<int> & a, int key) {
    int l(-1), r(a.size());
    while (l < r - 1) {
        int mid((l+r)/2);
        if (key < a[mid]) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main() {
    int n(0), tmp(0);
    vector<int> a;
    cin >> n;
    while (n) {
        cin >> tmp;
        a.push_back(tmp);
        --n;
    }
    cin >> n;
    while (n) {
        cin >> tmp;
        cout << ((a[bs(a, tmp)-1] == tmp) ? bs(a, tmp)-1 : - 1) << " ";
        --n;
    }
    return 0;
}
