#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> & a, int L, int R) {
    int tmp(a[L]);
    a[L] = a[R];
    a[R] = tmp;
}


void qs(vector<int> & a, int L, int R) {

    int l(L), r(R), cl(0), cr(0), mid((l+r)/2);

    do {

        while(a[l] < a[mid]) {
            ++l;
        }

        while((a[l+cl] == a[mid]) && (l + cl != mid)) {
            ++cl;
        }

        while(a[r] > a[mid]) {
            --r;
        }

        while ((a[r+cr] == a[mid])  && (r + cr != mid))  {
            --cr;
        }


        if (l <= r) {
                if (l < r) {
                    swap(a, l, r);
                }
                ++l;
                --r;

            }
        if ((l + cl >= r + cr) && (l == 0) && (r == R)) {
            break;
        }
    } while(l <= r);
    if (!((l + cl >= r + cr) && (l == 0) && (r == R))) {
        cr = 0;
        cl = 0;
        if (l + cl < R) {
            qs(a, l + cl, R);
        }

        if (r + cr > L) {
            qs(a, L, r + cr);
        }

    }
}


int main() {
 /*   cout << "Here we are again!" << endl;
    vector<int> data = { 5, 3, 3, 1, 3 };
    qs(data, 0,  data.size());
    for (int i(0); i < data.size(); ++i)
    {
        cout << data[i] << " ";
    }*/
 vector<int> data;
 int n(0), tmp(0);
 cin >> n;
 for (int i(0); i < n; ++i) {
     cin >> tmp;
     data.push_back(tmp);
 }
    qs(data, 0,  data.size()-1);
    for (int i(0); i < data.size(); ++i)
    {
        cout << data[i] << " ";
    }
}
