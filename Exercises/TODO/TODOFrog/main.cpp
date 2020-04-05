#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    int t(0), distL(0), distRR(0), flagR(0), flagLR(0);
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> s;
        for (int j(0); j < s.size(); ++j) {
            if ((s[i] == 'L') && (flagLR == 0)) {
            distL++;
        } else {
                ++flagLR
            } else {
                if ((s[i] == 'L') && (flagR != 0)) {
                    if (flagR > distRR) {
                        distRR = flagR;
                    }
                    flagR = 1;
                } else {
                    +=flagR
                }
            }
            }
        }
    }
    return 0;
}
