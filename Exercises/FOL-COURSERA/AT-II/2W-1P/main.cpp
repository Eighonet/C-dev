#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n(0);
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    f.push_back(1);
    cin >> n;
    if (n > 2) {}
    for (int i(3); i <= n; ++i) {
        f.push_back(f[i-1] + f[i - 2]);
    }
    cout << f[n];
    return 0;
}
