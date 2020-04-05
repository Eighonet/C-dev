#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n(0), tmp(0), checkerGen(0), checkerRCI(0), checkerBSI(0), condRCI(0), condBSI(0);
    vector<int> RCI, BSI;
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        RCI.push_back(tmp);
        if (RCI[i] == 1) {
            ++checkerRCI;
        }
    }
    for (int i(0); i < n; ++i) {
        cin >> tmp;
        BSI.push_back(tmp);
        if ((BSI[i] == 1) && (RCI[i] == 1)) {
            ++checkerGen;
        }
        if (BSI[i] == 1) {
            ++checkerBSI;
        }
    }
    condRCI = checkerRCI - checkerGen;
    condBSI = checkerBSI - checkerGen;
    if (condRCI <= 0) {
        cout << endl << -1;
    }
    else {
        if ((condBSI+1) % condRCI != 0) {
            cout << endl << ((condBSI+1)/condRCI) + 1;
        } else {
            cout << endl << ((condBSI+1)/condRCI);
        }
    }
    return 0;
}
