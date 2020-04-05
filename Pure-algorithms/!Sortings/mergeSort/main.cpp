#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge(vector<int> & a, int left, int mid, int right) {
    int it1 (0), it2 (0);
    vector<int> result(right - left);
    while ((left + it1 < mid) && (mid + it2 < right)) {
        if (a[left + it1] < a[mid + it2]) {
            result[it1 + it2] = a[left +it1];
            ++it1;
        }
        else {
            result[it1 + it2] = a[mid + it2];
            ++it2;
        }
    }
    while (left + it1 < mid) {
        result[it1+it2] = a[left + it1];
        ++it1;
    }
    while (mid + it2 < right) {
        result[it1+ it2] = a[mid + it2];
        ++it2;
    }
    for (int i(0); i < it1 + it2; ++i) {
        a[left + i] = result[i];
    }
}

void mergeSort(vector<int> & vector, int n) {
    for (int i(1); i < n;  i *=2) {
        for (int j(0); j < n - i; j+=2*i) {
            merge(vector, j, j+i, min(2*i + j, n));
        }
    }
}

int main() {
    vector<int> a = {1,5, 2, 5,6};
    mergeSort(a, a.size());

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
