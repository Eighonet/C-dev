using namespace std;
#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0;
	cin >> n >> m;
	vector<long long> quartiers(n);
	int summ = 0;
	for (int i = 0; i < n; i++) {
		long long a = 0;
		cin >> a;
		quartiers[i] = a;
	//	cout << "!" << quartiers[i] << endl;
	}
	vector<long long> letters(m);
		for (int i = 0; i < m; i++) {
		long long a = 0;
		cin >> a;
		letters[i] = a;
	}

	for (int i = 0; i < m; i++) {	
		int z = 0;
		long long k = 0;
		long long c = 0;
		for (int j = 0; letters[i] > k && j < n; j++) {
			k = k + quartiers[j];
			c = quartiers[j];
			z = j;
		//	cout << j << " " << k << " " << c << endl;
		}
		long long u = letters[i] - k + c;
		cout << z+1 << " " << u << endl;
	}
	cin >> n;
}