#include <iostream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define fi(n) for (int i(0); i < n; ++i)
#define fj(n) for (int j(0); j < n; ++j)
#define fz(n) for (int z(0); z < n; ++z)

int main() {
    int n(0), t(0), m(0), flag(0);
    cin >> m;

    cin >> n;
    cin >> t;
    int k(1);
    while (2*k + 1 < t) {
        k += (k + 1);
    }
    int fidd(t - k - 1);
    fi(n) {
        if ((i == k) || (i == n -fidd)) {
            if (i == k) {
                cout << 'b';
            }
            if (i == n - fidd) {
                cout << 'b';
            }
        } else {
            cout << 'a';
        }

    }
    return 0;
}
