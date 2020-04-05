#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int compare(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    vector<int> L;
    vector<int> R;
    vector<int> M;
    int tmpL(0), tmpR(0), tmpLS(0), tmpRS(0), flagL(0), flagR(0), add(0), addL(0), addR(0), dop(0);
    string s;
    cin >> s;
    dop = s.size();
    for (int g(0); g < dop; g++) {

        for (int i(0); i < s.size() / 2; i) {
            if ((s[i] == '(') && (s[s.size() - i - 1] == ')')) {
                s.erase(0, 1);
                s.erase(s.size() - 1, 1);
                add++;
                addL++;
                addR++;
                M.push_back(i + addL);
                M.push_back(dop + 1 - addR);
            } else {
                break;
            }
        }

        flagL = 0;
        flagR = 0;
        for (int i(0); i < s.size(); i) {
            if ((flagL == 0) && (s[i] == ')')) {
                s.erase(0, 1);
                addL++;
                continue;
            } else {
                flagL++;
                break;
            }
        }

        for (int i(s.size() - 1); i >= 0; i) {
            if ((flagR == 0) && (s[i] == '(')) {
                s.erase(s.size() - 1, 1);
                addR++;
                continue;
            } else {
                flagR++;
                break;
            }
        }

    }

        if (add != 0)  {
            sort(M.begin(), M.end());
            cout << endl << 1 << endl;
            cout << M.size() << endl;
            for (int i(0); i < M.size(); ++i) {
                cout << M[i] << " ";
            }
        } else {
            cout << '0';
        }

/*
    for (int i(0); i < s.size(); ++i) {


            if (s[i] == '(') {
                tmpL++;
            }
          if (s[i] == ')') {
            tmpR++;
          }
            if ((s[i] == '(') && (i < s.size()/2)) {
                tmpLS++;
            }
            if ((s[i] == ')') && (i >= s.size()/2)) {
                tmpRS++;
            }
    }
    int border(0), border1(0);
    if ((tmpL == 0) || (tmpR == 0)) {
        if (M.size() == 0) {
            cout << 0;
            return 0;
        }
    }
    if (tmpL != tmpR) {
        border = compare(tmpL, tmpR);
    }
    else {
        border = compare(tmpLS, tmpRS);
    }
//    border1 = compare(tmpLS, tmpRS);
    if ((tmpLS == 0) && (tmpRS == 0)) {
        if (M.size() == 0) {
            cout << 0;
            return 0;
        }
    }
//    border = compare(border, border1);
    for (int i(0); i < s.size(); ++i) {
        if (L.size() == border) {
            break;
        }
        if (s[i] == '(') {
            L.push_back(i+1);
        }
    }
    for (int i(s.size()-1); i >= 0; --i) {
        if (R.size() == border) {
            break;
        }
        if (s[i] == ')') {
            R.push_back(i+1);
        }
    }
    for (int i(0); i < border; ++i) {
        L.push_back(R[i]);
    }
    for (int i(0); i < M.size(); ++i) {
        L.push_back(M[i]);
    }
    sort(L.begin(), L.end());
    if (L.size() !=0) {
        cout << 1 << endl;
    } else {
        cout << 0;
        return 0;
    }
    cout << L.size() << endl;
    for (int i(0); i <  L.size(); ++i) {
        cout << L[i] + add << " ";
    }
    */
        return 0;
}
