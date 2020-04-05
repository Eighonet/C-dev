#include <iostream>
#include <string>
using  namespace std;

int main() {
    int n(0), cnt(0), flag1(0);
    string s;
    cin >> n;
    cin >> s;
 //   for (int i(1); i < s.size()-1; ++i) {
        if (s[1] - 1 == s[0] + 0) {
            s = s.substr(1, s.size() - 1);
            ++cnt;
        }

        for (int i(1); i < s.size() - 1; ++i) {

            cout << s[i]+1 << " " << s[0] + 0;
            if ((s[i] + 0 == s[i - 1] + 1) || (s[i] + 0 == s[i + 1] + 1)) {
                flag1++;
            } else {
                if (flag1 != 0) {
                    s = s.substr(i - flag1 , i - 1);
                    cnt += flag1;
                    flag1 = 0;
                }
            }
        }
//    }
    cout << endl << s << endl << cnt;
    return 0;
}
