#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t(0), n(0), m(0), tmp(0), counter(0), reverse(0);
    vector<int> mist;
    vector<char> alphabet = {'a', 'b','c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                             'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};
    string combo, comboUn;

    map<char, int> repeat;
    map<char, int> answer;
    cin >> t;
    for (int i(0); i < t; ++i) {
        cin >> n >> m;
        cin >> combo;
        vector<int> count(n);
        for (int j(0); j < m; ++j) {
            cin >> tmp;
            mist.push_back(tmp);
        }
        sort(mist.begin(), mist.end());
        int mm(m-1);
        for (int j(n - 1); j >= 0; --j) {
            if ((j + reverse) < 0) {
                break;
            }
            if ((j + 1) == mist[mm]) {
                ++counter;
                --mm;
            }
            count[j] = counter;
            if ((mm != -1) && (mist[mm+1] == mist[mm])) {
            //    --reverse;
                ++j;
            }
        }
        for (int j(0); j < n; ++j) {
            if (repeat.find(combo[j]) == repeat.end()) {
                repeat.insert(make_pair(combo[j], 1));
            }  else {
                repeat.find(combo[j])->second += 1;
            }
        }
        for (int j(0); j < n; ++j) {
        if (answer.find(combo[j]) == answer.end()) {
            answer.insert(make_pair(combo[j], count[j]));
        }  else {
            answer.find(combo[j])->second += count[j];
        }
        }
        for (auto it(answer.begin()); it != answer.end(); ++it) {
            comboUn += it->first;
        }
        for (int j(0); j < answer.size(); ++j) {
                answer.find(comboUn[j])->second += repeat.find(comboUn[j])->second;
        }
        for (int j(0); j < alphabet.size(); ++j) {
            if (answer.find(alphabet[j]) == answer.end()) {
                answer.insert(make_pair(alphabet[j], 0));
            }
        }
        for (int j(0); j < answer.size(); ++j) {
            cout << " " << answer.find(alphabet[j])->second;
        }
      comboUn.clear();
      mist.clear();
      answer.clear();
      count.clear();
      repeat.clear();
      counter = 0;
      cout << endl;
    }
    return 0;
}