#include <iostream>
using namespace std;
int main() {
    int n(0), counter(0), tmp(0);
    cin >> n;
    for (int j(0); j < n*n; ++j) {
        cin >> tmp;
        counter += tmp;
    }
    cout << endl <<counter/2;
    return 0;
}
