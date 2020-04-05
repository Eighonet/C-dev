#include <iostream>
#include <vector>

using namespace std;
/*
int requrentShit (vector<int> & a) {
    vector<int> w = a, var = {1,2,3};
    int shift(0), pointer(0);
    for (int i(0); i < a.size(); i) {
        if (i == 0)
    }
}
*/
int main() {
    int N(0), K(0), shift(0), pointer(0);
    int flag(0), rflag(0), cycle(0);
    vector<int> var = {1, 2};
    cin >> N >> K;
    vector<int> m(N, 0);

    // binary sequence check begin

    for (int i(0); i < N; ++i) {
        if (flag == 0) {
            m[i] = 1;
            ++flag;
        } else {
            m[i] = 2;
            --flag;
        }
    }
    for (int i(0); i < N; ++i) {
        cout << m[i];
    }
    cout << endl;
    flag = 2;
    for (int i(0); i < N; i) {
        if (pointer == shift) {
            ++rflag;
        }
        if (rflag > 1) {
            ++shift;
            pointer = shift;
            rflag = 1;
        } else {
            if ((m[pointer] == 1) && (flag == 2)) {
                cout << m[pointer];
                pointer += K;
                for (int z(0); z < K-1; ++z) {
                    cout << " ";
                }
                if (pointer >= N) {
                    pointer = pointer - N;
                    cout << endl;
                    for (int z(0); z < pointer; ++z) {
                        cout << " ";
                    }
                }
                flag = 1;
                ++i;
            } else {
                if ((m[pointer] == 2) && (flag == 1)) {
                    cout << m[pointer];
                    pointer += K;
                    for (int z(0); z < K-1; ++z) {
                        cout << " ";
                    }
                    if (pointer >= N) {
                        pointer = pointer - N;
                        cout << endl;
                        for (int z(0); z < pointer; ++z) {
                            cout << " ";
                        }
                    }
                    flag = 2;
                    ++i;
                } else {
                    cout << endl << "-1";
                    break;
                }
            }
        }
    }

    // binary sequence check end




    for (int i(0); i < N/2; i+= K) {


    }
    return 0;
}
