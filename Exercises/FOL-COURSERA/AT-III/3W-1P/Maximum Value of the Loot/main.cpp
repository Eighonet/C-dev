#include <iostream>
#include <tuple>
#include <vector>
#include <cmath>

using namespace std;

struct item {
    double w;
    double v;
    double index;
//    item(double w, double v)
 //   : w(w), v(v), index(v/w) {}
};

int min (int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}


void merge(vector<item> & a, int left, int mid, int right) {
    int it1(0), it2(0);
    vector<item> result(right - left);
    while ((left + it1 < mid) && (mid + it2 < right)) {
        if (a[left + it1].index < a[mid + it2].index) {
            result[it1 + it2] = a[left + it1];
            ++it1;
        } else {
            result[it1 + it2] = a[mid + it2];
            ++it2;
        }
    }

    while (left + it1 < mid) {
        result[it1 + it2] = a[left + it1];
        ++it1;
    }

    while (mid + it2 < right) {
        result[it1 + it2] = a[mid + it2];
        ++it2;
    }

    for (int i(0); i < it1 + it2; ++i) {
        a[left + i] = result[i];
    }
}

void mergeSort(vector<item> & a) {
    for (int i(1); i < a.size(); i *= 2) {
        for (int j(0); j < a.size() - i; j += 2*i) {
            merge(a, j, i+j, min(i+2*j, a.size()));
        }
    }
}

int main() {
    double n(0), tmpw(0), tmpv(0);
    cin >> n;
    vector<item> a;
    for (int i(0); i < n; ++i) {
        cin >> tmpw >> tmpv;
        item cur;
        cur.w = tmpw; cur.v = tmpv; cur.index = (tmpv/tmpw);
        a.push_back(cur);
    }
    for (int i(0); i < n; ++i) {
        cout << endl << a[i].index;
    }
    mergeSort(a);
    for (int i(0); i < n; ++i) {
    cout << endl << a[i].index;
    }
    return 0;
}
