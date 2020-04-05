#include <iostream>
#include <vector>

using namespace std;

void build ()

int main() {
    int N(0), tmp(0), Q(0);
    vector <int> K, B, X;
    cin >> N;
        for (int i(0); i < N; ++i) {
            cin >> tmp;
            K.push_back(tmp);
        }
    for (int i(0); i < N; ++i) {
        cin >> tmp;
        B.push_back(tmp);
    }
    cin >> Q;
    for (int i(0); i < Q; ++i) {
        cin >> tmp;
        X.push_back(tmp);
    }

    return 0;
}
