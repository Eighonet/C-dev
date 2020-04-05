#include <iostream>
#include <vector>

using namespace std;

long int gcd(long int a, long b) {
    return 0;
}

int findIndex(long int n, long int p) {
    int tmp(0);
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        if (1 ==  gcd(tmp, p) {
            indA = i;
        }
     }
}

int main() {
    long int n(0), m(0), p(0), tmp(0);
    int indA(0), indB(0);
    cin >> n >> m >> p;
    vector<long int> a;
    vector<long int> b;
    indA = findIndex(n,p);
    indB = findIndex(m,p);
    return 0;
}
