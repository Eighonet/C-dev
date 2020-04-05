#include <iostream>
#include <map>

#include <math.h>
#include <vector>
using namespace std;

vector<int> divisors(int k) {
    vector<int> a;
    for (int i(0); i <= sqrt(k); ++i) {
        if (k % i == 0) {
            a.push_back(i);
        }
    }
    return a;
}

void generate(map<int,int> & Row, int n) {
    int flag(0), tmp(0);
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        if ((flag == 0) && (tmp != 0)){
            flag++;
        } else {
            if ((flag != 0) && (tmp != 0)) {
                flag++;
            }
            else {
                if ((flag != 0) && (tmp == 0)) {
                    if (Row.find(flag) == Row.end()) {
                        Row.insert(make_pair(flag, 1));
                    }
                    else {
                        Row.find(flag)->second += 1;
                    }
                    flag = 0;
                }
            }
        }
    }
    if (flag != 0) {
        if (Row.find(flag) == Row.end()) {
            Row.insert(make_pair(flag, 1));
        }
        else {
            Row.find(flag)->second += 1;
        }
    }
}

int main() {
    map<int,int> Row;
    map<int,int> Column;
    map<int,int> sq;
    int n(0), m(0), k(0), tmp(0), flag(0);
    cin >> n >> m >> k;
    generate(Row, n);
    generate(Column, n);
    for (auto it1 = Row.begin(); it1 != Row.end(); ++it1) {
        for (auto it2 = Column.begin(); it2 != Column.end(); ++it2) {
        tmp = (it1->first)*(it2->first);
            if (sq.find(tmp) == sq.end()) {
                sq.insert(make_pair(tmp, (it1->second)*(it2->second)));
            }
            else {
                sq.find(tmp)->second += (it1->second)*(it2->second);
            }
        }
    }
    int count(0);
    for (int i = 0; i < divisors(k).size(); i++) {
        for (auto it = sq.begin(); it != sq.end(); ++it) {
           if (k <= it->first) {

           }
        }
    }


    for (auto it = sq.begin(); it != sq.end(); ++it) {
        cout << endl << it->first << " " << it->second;
    }

    return 0;
}
