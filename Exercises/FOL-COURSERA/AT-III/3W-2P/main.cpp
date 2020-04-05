#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


struct item {
    double v;
    double w;
    double index;
    item (double v, double w, double index) : v(v), w(w), index(index) {
    }
    const bool operator <(const item & rhs) {
        return index > rhs.index;
    }
};


bool compareItems (item & a, item & b) {
    if (a.index > b.index) {
        return true;
    } else {
        return false;
    }
}

int main() {
    vector<item> z;
    int n(0), W(0);
    double tmp1(0), tmp2(0), cost(0);
    cin >> n;
    cin >> W;
    for (int i(0); i < n; ++i) {
        cin >> tmp1 >> tmp2;
        item k(tmp1, tmp2, tmp1/tmp2);
        z.push_back(k);
    }
    sort(z.begin(), z.end());
    for (int i(0); i < z.size(); ++i) {
        if (z[i].w <= W) {
            cost+=z[i].v;
            W -= z[i].w;
        } else {
            cost += (z[i].v*W)/z[i].w;
            W = 0;
        }
    }
    cout.precision(17);
    std::cout << cost << std::endl;
    return 0;
}
