#include <iostream>
using namespace std;

int main() {
    int t(0), a(0), b(0), c(0), sumOne(0);
    cin >> t;
    for (int i(0); i <= t; ++i) {
        if (i == 0) {
        }
        else {
            cout << sumOne << endl;
            sumOne = 0;
        }
        cin >> a >> b >> c;
        if ((a >0) && (b > 0) && (c > 0))
        {
            --a;
            --b;
            --c;
            sumOne +=3;
            if ((a > 0) && (b > 0) && (c > 0)) {

                if (b >= (a + c)) {
                    if ((a > 0) && (b > 0)) {
                        --a;
                        --b;
                        sumOne += 1;
                    }
                    if ((b > 0) && (c > 0)) {
                        --b;
                        --c;
                        sumOne += 1;
                    }
                    if ((a > 0) && (c > 0)) {
                        --a;
                        --c;
                        sumOne += 1;
                    }
                }
                else {
                    if (a >= (b + c)) {
                        if ((a > 0) && (c > 0)) {
                            --a;
                            --c;
                            sumOne += 1;
                        }
                        if ((a > 0) && (b > 0)) {
                            --a;
                            --b;
                            sumOne += 1;
                        }
                        if ((b > 0) && (c > 0)) {
                            --b;
                            --c;
                            sumOne += 1;
                        }
                    }
                    else {
                        if ((a > 0) && (c > 0)) {
                            --a;
                            --c;
                            sumOne += 1;
                        }
                        if ((b > 0) && (c > 0)) {
                            --b;
                            --c;
                            sumOne += 1;
                        }
                        if ((a > 0) && (b > 0)) {
                            --a;
                            --b;
                            sumOne += 1;
                        }
                    }
                }



                if ((a > 0) && (b > 0) && (c > 0)) {
                    sumOne +=1;
                    continue;
                }
                else {
                    continue;
                }


            }
            else {
                if ( ((a > 0) && (b > 0)) || ((a > 0) && (c > 0)) || ((b > 0) && (c > 0)) ) {
                    sumOne +=1;
                    continue;
                }
                else {
                    continue;
                }
            }
        }
        else {
            if ( ((a > 0) && (b > 0)) || ((a > 0) && (c > 0)) || ((b > 0) && (c > 0)) ) {
                sumOne +=2;
                a--;
                b--;
                c--;
                if ( ((a > 0) && (b > 0)) || ((a > 0) && (c > 0)) || ((b > 0) && (c > 0)) ) {
                    sumOne +=1;
                    continue;
                }
                else {
                    continue;
                }
            }
            else {
                if ((a == 0) && (b == 0) && (c == 0)) {
                    sumOne = 0;
                    continue;
                }
                sumOne +=1;
                continue;
            }
        }
    }
}
