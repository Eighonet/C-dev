#include <iostream>
#include <vector>

using namespace std;

int binsearch(vector <int> a, int key) {
    int l(-1);
    int r(a.size());
    while (l < r-1) {
    int mid((l+r)/2);
        if (key < a[mid]) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main() {
    int d(0), m(0), n(0), tmp(0), additional(0), counter(0);
    vector<int> a;
    cin >> d >> m >> n;
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    a.push_back(d);
    for (int i(0); i < a.size()-1; i) {
        if (a[i+1] > m) {
            if (a[i] > m) {
                counter = -1;
                break;
            }
            counter++;
            additional = a[i];

            a.erase(a.begin(), a.begin() + 1);
            for (int j(0); j < a.size(); ++j) {
                a[j] -= additional;
            }
        } else {
            a.erase(a.begin(), a.begin()+1);
        }
    }
    if ((a.size() == 1) && (a[0] > m))
    {
        counter = -1;
    }
    cout << endl << counter;
    return 0;
}
