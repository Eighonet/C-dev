#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define fi(n) for (int i(0); i < n; ++i)
#define fj(n) for (int j(0); j < n; ++j)
#define fz(n) for (int z(0); z < n; ++z)

int main() {

    int n(0), t(0), flag(0);
    string tmp;
    cin >> t;
    vector<int> number, min, max;

    fi(t) {
        cin >> n;
        cin >> tmp;
        fz(n) {
            if ((tmp[z] == '2') || (tmp[z] == '0')) {
                if (flag == 0) {
                    if (tmp[z] == '2') {
                        max.push_back(1);
                        min.push_back(1);
                    } else {
                        max.push_back(0);
                        min.push_back(0);
                    }
                } else {
                    if (tmp[z] == '2') {
                        max.push_back(0);
                        min.push_back(2);
                    } else {
                        max.push_back(0);
                        min.push_back(0);
                    }
                }
            } else {
                if (flag == 0) {
                    max.push_back(1);
                    min.push_back(0);
                } else {
                    max.push_back(0);
                    min.push_back(1);
                }
                ++flag;
            }
        }
        fz(n) {
            cout << max[z];
        }
        cout << endl;
        fz(n) {
            cout << min[z];
        }
        flag = 0;
        max.clear();
        min.clear();
        cout << endl;
    }
    return 0;
}
