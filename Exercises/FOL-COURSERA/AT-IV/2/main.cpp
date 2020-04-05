#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bs (vector<int> & a, int key) {
    int l(-1), r(a.size());
    while (l < r - 1) {
        int mid((l+r)/2);
        if (a[mid] > key) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main() {
    int n(0), tmp(0), res(0);
    vector<int> a;
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a. end());
    int ptr(0);
    for (int i(0); i < n; ++i) {
        int z(bs(a, a[i]) );
        if (z - ptr > n/2) {
            res = 1;
        } else {
            ptr = z;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
