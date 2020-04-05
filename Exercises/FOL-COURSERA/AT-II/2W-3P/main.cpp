#include <iostream>

using namespace std;

int GCD(long int a, long int b) {
    int tmp(0);


    while ((b != 0) && (a != 0)) {
        if (a < b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        a = a % b;
    }
    return a + b;
}


int main() {
    int a(0), b(0);
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}
