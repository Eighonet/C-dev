#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct space{
    int begin;
    int end;
    space (int begin, int end) : begin(begin), end(end) {}
};

int main() {
    int n(0), tmp1(0), tmp2(0);
    vector <space> a;
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> tmp1 >> tmp2;
        space b(tmp1, tmp2);
        a.push_back(b);
    }
    sort(a.begin(), a.end(),
            [](const space & left, const space & right) {
                return left.begin < right.begin;
            });
    vector<space> b;

    for (int i(0); a[i].begin <= a[0].end; ++i) {
        b.push_back(a[i]);
    }

    sort(b.begin(), b.end(),
            [](const space & lhs, const space & rhs) {
            return lhs.end < rhs.end;
        });

    return 0;
}
