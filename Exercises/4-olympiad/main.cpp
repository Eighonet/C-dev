#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> & vector, int a, int b) {
    int tmp(vector[a]);
    vector[a] = b;
    vector[b] = tmp;
}

void hoarSort(vector<int> & a, int Left, int Right) {
    int mid (a[(Right+Left)/2]), left(Left), right(Right);
    do {
        while (a[left] < mid) {
            ++left;
        }
        while (a[right] > mid) {
            --right;
        }
        if (right >= left) {
            if (right > left) {
                swap(a[left], a[right]);
            }
        ++left;
        --right;
    }
    } while (left <= right);

    if (left < Right) {
        hoarSort(a, left, Right);
    }
    if (right > Left) {
        hoarSort(a, Left, right);
    }
}

int main() {
    int N(0);
    vector<int> time;
    cin >> N;
    int T(0);
    for (int i(0); i < N; ++i) {
        cin >> T;
        time.push_back(T);
    }
    int fifthCourse(0), thirdCourse(0), firstCourse(0);
    int tmp(0);

    for (int i(0); i < N; ++i) {
        fifthCourse += (N-i)*time[i];
    }
    tmp = 0;

    for (int i(N-1); i >= 0; --i) {

        thirdCourse += (i+1)*time[i];
    }
    tmp = 0;

    hoarSort(time, 0, time.size()-1);

    for (int i(0); i < N; ++i) {
        firstCourse += (N-i)*time[i];
    }

    if ((firstCourse <= thirdCourse) && (firstCourse <= fifthCourse))
    {
        cout << 1;
    }
    if ((thirdCourse < firstCourse) && (thirdCourse <= fifthCourse))
    {
        cout << 3;
    }
    if ((fifthCourse < firstCourse) && (thirdCourse > fifthCourse))
    {
        cout << 5;
    }
}
