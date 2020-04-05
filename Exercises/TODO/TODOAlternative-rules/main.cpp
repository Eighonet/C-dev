#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t(0), n(0), x(0), y(0);
    int min(0), max(0), decay(0), midFlag(0);
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> n >> x >> y;
        if (x + y <= n) {
            decay = x + y - 1;
            if (decay >= 5) {
                min = ((decay - 1) - 2 + 1) + 1;
                max = n - ((n - 2) + 1);
            } else {
                if (decay == 4) {
                        min = ((decay - 1) - 1) + 1;;
                        max = n - ((n - 2) + 1);
                } else {
                    if (decay == 3) {
                        if (x == y) {
                            min = 2;
                            max = 1;
                        } else {
                            min = 3;
                            max = n - ((n - 2) + 1);
                        }
                    } else {
                        if (decay == 2) {
                            min = max = 1;
                        }
                    }
                }
            }
        }

        if (x + y > n) {
            decay = 2*n - (x+y) + 1;
            if (decay >= 5) {
                min = ((n - 2) + 1) + 1;
                max = n - ((decay - 1) - 2 + 1);

            } else {
                if (decay == 4) {

                        min = ((n - 2) + 1) + 1;
                        max = n - ((decay - 1) + 1);
                } else {
                    if (decay == 3) {
                        if (x == y) {
                            min = n;
                            max = n-1;
                        } else {
                            min = ((n - 2) + 1) + 1;
                            max = n-1;
                        }
                    } else {
                        if (decay == 2) {
                            min = max = n;
                        }
                    }
                }
            }
        }

        cout << endl << max << " " << min;
        midFlag = 0;
    }
    return 0;
}
