#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int changeMoney (int curr, int amount, int count) {
    if (curr < amount) {
        if (curr < amount - 12) {
            return (changeMoney(curr+4, amount, count + 1));
        } else {
            return (min(changeMoney(curr + 1, amount, count + 1),
                        min(changeMoney(curr + 3, amount, count + 1),
                            changeMoney(curr + 4, amount, count + 1))));
        }
    } else {
        if (curr == amount) {
            return count;
        } else {
            return numeric_limits<int>::max();
        }
    }
}

int main() {
    int n(0);
    cin >> n;
    cout << changeMoney(0, n, 0);
    return 0;
}
