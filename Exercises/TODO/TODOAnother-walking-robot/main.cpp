#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct pos {
    vector<pair<int,int>> legacy;
    vector<int>
    int x;
    int y;
    int Add(int x, int y) {
        legacy.push_back(make_pair(x, y));
    }
    int IsReturn(int x, int y) {
        for (int t(legacy.size()-1); t >= 0; --t) {
            return (legacy[t].first == x) && (legacy[t].second == y) ? legacy.size()-1-t : 0;
        }
    }
};


int main() {
    int t(0), n(0), sum(-1), k(0); string tmp(""); pos curr;
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> n;
        for (int z(0); z < n; ++z) {
            cin >> tmp;
            while (sum != 0) {
                switch (tmp[k]) {
                    case 'U':
                        curr.x++;
                        break;
                    case 'D':
                        curr.x--;
                        break;
                    case 'R':
                        curr.y++;
                        break;
                    case 'L':
                        curr.y--;
                        break;
                }
                sum = curr.IsReturn(curr.x, curr.y);
                ++k;
            }
        }
    }

}
