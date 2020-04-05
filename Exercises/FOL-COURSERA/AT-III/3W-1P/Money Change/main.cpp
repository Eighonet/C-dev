#include <iostream>
using namespace std;

int main() {
  int m(0), ten(0), five(0), one(0);
  std::cin >> m;
  ten = m/10;
  m = m - 10*(m/10);
  five = m/5;
  m = m - 5*(m/5);
  one = m;
  std::cout << ten + five + one << endl;
  return 0;
}
