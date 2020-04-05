#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

long int binsearchF (vector<pair<int,int>> & a, long int key, long int border) {
    long int l(-1), r(border);
    while (l < r-1) {
        long int m((l+r)/2);
        if (a[m].first > key) {
           r = m;
        } else {
            l = m;
        }
    }
    if (r < 0) {
        r = 0;
    } else {
        if (r >= border) {
            r = border - 1;
        }
    }
    return r;
}

long int binsearchS(vector<pair<int,int>> & a, long int key, long int border) {
    long int l(-1), r(border-1);
    while (l < r-1) {
        long int m((l+r)/2);
        if (a[m].second > key) {
            r = m;
        } else {
            l = m;
        }
    }
    if (r < 0) {
        r = 0;
    } else {
        if (r >= border) {
            r = border - 1;
        }
    }
    return r;
}

long int max(long int a, long int b) {
    return (a < b) ? b : a;
}

int main() {
    long int N(0), M(0), Q(0), tmp(0);
    long int prevBorder(0), currBorder(0), prevAns(0), currAns(0);
    vector <pair<int, int>> D;
    map<int, int> T;
    vector <pair<int, int>> I;
    cin >> N;
    for (int i(0); i < N; ++i) {
        cin >> tmp;
        T.insert(make_pair(i+1, tmp));
    }
    cin >> M;
    for (int i(0); i < M; ++i) {
        if (i == 0) {
            cin >> prevBorder >>prevAns;
        } else {
            cin >> currBorder >> currAns;
            auto it = T.find(prevAns);
            if (it != T.end()) {
                tmp = it->second;
                D.push_back(make_pair((tmp - (currBorder -1) < tmp - prevBorder) ? (tmp - (currBorder - 1)) : (tmp - prevBorder),
                                      (tmp - (currBorder -1) < tmp - prevBorder) ? (tmp - prevBorder)  : (tmp - (currBorder - 1))));
            }
            prevBorder = currBorder;
            prevAns = currAns;
           /* if ( i+1 == M) {
                auto it = T.find(prevAns);
                if (it != T.end()) {
                    tmp = it->second;
                    D.push_back(make_pair(-100000000, tmp - prevBorder));
                }
            }*/
        }
    }

    pair<int, int> last;

    auto it = T.find(prevAns);
    if (it != T.end()) {
        tmp = it->second;
        last = make_pair(-100000000, tmp - prevBorder);
    }

    for (int i(0); i < D.size(); ++i) {
        cout << endl << D[i].first << " " << D[i].second;
    }


    sort(D.begin(), D.end(),
            [](pair<int, int> & a, pair<int,int> & b) {
            return a.first < b.first;
    });

    cout << endl << last.first << " " << last.second;
    for (int i(0); i < D.size(); ++i) {
        cout << endl << D[i].first << " " << D[i].second;
    }

    cin >> Q;
    cout << endl;
    for (int i(0); i < Q; ++i) {
        cin >> tmp;
   cout << endl << "Edge end - " << binsearchF(D, tmp, D.size());
   cout << endl << "Edge beginning - " << binsearchS(D, tmp-1, D.size());

    long int ans(binsearchF(D, tmp, D.size()) - binsearchS(D, tmp-1, D.size()));

    if (tmp < last.second) {
        ++ans;
    }
        cout << ans << " ";
    }
    return 0;
}
