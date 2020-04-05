#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool sortByCount(const pair<long int, long int> &a, const pair<long int,long int> &b)
{
    if (a.first == b.first)
    {
        return (a.second > b.second);
    }
    else
    {
        return (a.first < b.first);
    }
}


int main() {
    int t(0), n(0);
    long int tmp(0), counter(0);
    vector<long int> a(0);
    vector<pair<long int, long int>> cont(0);
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> tmp;
       a.push_back(tmp);
    }
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        cont.push_back(make_pair(a[i], tmp));
    }
    sort(cont.begin(), cont.end(), sortByCount);

        for (int z(0); z < n; ++z) {
            for (int i(0); i < n - 1; ++i) {
                if (cont[i].first == cont[i + 1].first) {
                    if (cont[i].second < cont[i + 1].second) {
                        counter += cont[i].second;
                        cont[i].swap(cont[i + 1]);
                        cont[i + 1].first += 1;
                    } else {
                        /*if (i+2 != n) {
                            if (cont[i+2].first != cont[i].first) {
                                cont[i+1].first +=1;
                            }
                        }*/
                    }
                }
            }
        }

    for (int z(0); z < n; ++z) {
        for (int i(n-1); i > 0; --i) {
            if (cont[i].first == cont[i - 1].first) {
                if (cont[i].second < cont[i - 1].second)  {
                 if (i)
                    counter += cont[i].second;
                    cont[i].first += 1;
                } else {

                }
            }
        }
    }

    for (int i(0); i < n; ++i) {
        cout << endl << cont[i].first << " " << cont[i].second;
    }
    cout << endl << counter;
    return 0;
}
