#include <iostream>
#include <map>
#include <math.h>

using namespace std;

void find_dividers(int x, map<int, int> dividers) {

    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            dividers.insert(i);
            if (i * i != x) {
                dividers.insert(x / i);
            }
        }
    }
    return dividers;
}


int main() {
    int q(0), type, x;
    map<int,int> c;
    cin >> q;
    for (int i(0); i < q; ++i) {
        cin >> type;
        if (type == 1) {
            cin >> x;
            auto it = c.find(x);
            if (it == c.end()) {
                c.insert(x, 1);
            } else {
                it->second += 1;
            }
        }
        if (type == 2) {
            cin >> x;
            auto it.second == 1;
            if (it == c.end()) {
                c.insert(x, 1);
            } else {
                it->second += 1;
            }
        }
        if (type == 3) {

        }
    }
    return 0;
}
