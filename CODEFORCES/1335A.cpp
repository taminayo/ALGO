#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0, c; i < t; i++) {
		cin >> c;
		if (c < 3) cout << 0 << endl;
		else {
			if (c % 2 == 0)	cout << c/2 - 1 << endl;
			else cout << c/2 << endl;
		}
	}
}
