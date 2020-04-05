#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n(0), m(0), k(0), xx(0), yy(0), tmp(0), val(100000000);
    vector <pair<int,int>> vir;
    vector <int> ans;
    cin >> n >> m >> k;
    for (int kk(0); kk < k; ++kk) {
        cin >> xx >> yy;
            vir.push_back(make_pair(xx, yy));
    }

        for (int x(1); x <= n; ++x) {
            for (int y(1); y <= m; ++y) {
                for (int kk(0); kk < k; ++kk) {
                    tmp = abs(x - vir[kk].first) + abs(y - vir[kk].second);

                    if (tmp < val) {
                        val = tmp;
                    }

                }
                ans.push_back(val);
                val = 0;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans[0];
   return 0;
}
