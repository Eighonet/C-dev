#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int min (int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}


void merge(vector <int> & a, int left, int mid, int right) {
    int it1(0), it2(0);
    vector <int> result(right-left);
    while ((left+it1 < mid) && (mid+it2 < right)) {
        if ((a[left+it1]) < (a[mid+it2])) {
            result[it1 + it2] = a[left + it1];
            it1++;
        } else {
            result[it1 + it2] = a[mid+it2];
            it2++;
        }
    }

    while (left+it1 < mid) {
        result[it1 + it2] = a[left+it1];
        ++it1;
    }
    while (mid+it2 < right) {
        result[it1 + it2] = a[mid+it2];
        ++it2;
    }
    for (int i(0); i < it1 + it2; ++i) {
        a[left + i] = result[i];
    }
}

void mergeSort(vector<int> & a) {
    for (int i(1); i < a.size(); i *= 2) {
        for (int j(0); j < a.size() - i; j += 2*i) {
            merge(a, j, j + i, min(j+2*i, a.size()));
        }
    }
}

int main() {
    int N(0), M(0), tmp1(0), tmp2(0);
    vector<int> first, second;
    cin >> N >> M;
    for (int i(0); i < M; ++i) {
        cin >> tmp1 >> tmp2;
        first.push_back(tmp1);
        first.push_back(tmp2);
    }

    mergeSort(first);
    tmp1 = -1;
    tmp2 = 0;
    for (int i(0); i < 2*M; ++i) {
        if (first[i] != tmp1) {
            tmp1 = first[i];
            if (i != 0) {
                cout << tmp2 << " ";
            }
            tmp2 = 1;
        } else {
            ++tmp2;
        }
    }
    cout << tmp2;
    return 0;
}
