#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, L, res; i < N; i++) {
		string t;
		cin >> t;
		L = t.length();
		res = count(t.begin(), t.end(), '0');
		cout << L - res << endl;
		for (int j = 0, l; j < L; j++) {
			l = t.length() - 1 - j;
			if (t[j] != '0') {
				if (j == 0) cout << (t[j] - '0')*pow(10, l);
				else cout << " " << (t[j] - '0')*pow(10, l);
			}
		}
		cout << endl;
	}
}
