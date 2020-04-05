#include <iostream>
#include <vector>
#include <string>

using namespace std;

int checkPolyndrom()


int main() {
    vector<int> a;
    vector<int> b;
    int t(0), n(0), tmp(0);
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> n;
        for (int j(0); j < n; ++j) {
            cin >> tmp;
            a.push_back(tmp);
        }
        b = a;
        int k(0), z(a.size());
        while (k != z) {
            if (b[k] == b[z]) {
                z--;
                k++;
            }
        }
    }
    return 0;
}
