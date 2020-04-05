#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int binsearch(vector<int> & a, int key) {
    int l(-1);
    int r(a.size());
    while (l < r-1) {
        if (key < a[(l + r)/2]) {
            r = (l + r)/2;
        }
        else {
            l = (l + r)/2;
        }
    }
    if (a[r-1] == key) {
        return r;
    }
    else {
        return -1;
    }
}
int main() {
    int count1(0), count2(0);
    cin >> count1 >> count2;
    vector<int> a(0);
    int tmp(0);
    for (int i(0); i < count1; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    cout << "Done!";
    //freopen ("myfile.txt","w",stdout);
    for (int i(0); i < count2; ++i) {
        cin >> tmp;
        cout << binsearch(a, tmp) << " ";
    }
    //fclose (stdout);
    return 0;
}
