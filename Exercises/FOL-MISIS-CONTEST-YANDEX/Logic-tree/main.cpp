#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n(0), v(0), tmp1(0), tmp2(0);
  vector<pair> inner;
  vector<int> outer;
  cin >> n >> v;
  for (int i(0); i < (n-1)/2; ++i) {
      cin >> tmp1 >> tmp2;
      inner.push_back(make_pair(tmp1, tmp2));
  }

  for (int i(0); i < (n+1)/2; ++i) {
      cin >> tmp1;
      outer.push_back(tmp1);
  }
  return 0;
}
