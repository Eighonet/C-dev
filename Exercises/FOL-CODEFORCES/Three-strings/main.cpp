#include <iostream>
#include <string>
using namespace std;

int main() {
    int t(0), flag(0);
    string a(""), b(""), c("");
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> a >> b >> c;
        for (int z(0); z < a.size(); ++z) {
            if (!((b[z] == c[z]) || (a[z] == c[z]))) {
                ++flag;
                break;
            }
        }
        if (flag == 0) {
            cout <<endl<< "YES";
        } else {
            cout <<endl<< "NO";
        }
        flag = 0;
    }
    return 0;
}
