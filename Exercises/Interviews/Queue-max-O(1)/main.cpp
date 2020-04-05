#include <iostream>
#include <limits>
int main()
{
    double max = std::numeric_limits<double>::max();
    double inf = std::numeric_limits<int>::infinity();
    std::cout << inf;
    if(inf > 2)
        std::cout << inf << " is greater than " << max << '\n';
}