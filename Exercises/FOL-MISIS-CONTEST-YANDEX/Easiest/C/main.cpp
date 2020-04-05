#include <iostream>
#include <cmath>

using namespace std;

int extendedGCD (int a, int b) {
    int tmp(0), q(0), r(0);
    while ((a != 0) && (b != 0)) {
      if (b > a) {
          tmp = b;
          b = a;
          a = tmp;

      }

      a = a%b;
    }
    return a+b;
}

int main() {
    long int c = pow(10,9) + 9;
    long int T(0), a(0), tmp(0);
    cin >> T;
    for (int i(0); i < T; ++i) {
        cin >> a;
        tmp = (c / a) + 1;
        if (tmp > c) {
            tmp = tmp - c;
        }
        cout << endl <<tmp;
    }
    return 0;
}
