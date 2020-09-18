#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first, second;
	cin >> first >> second;
	for (int i = 0; i < first.length(); i++) {
		char f = tolower(first[i]), s = tolower(second[i]);
		if (f != s) {
			if (f > s) cout << 1;
			else cout << -1;
			return 0;
		}
	}
	cout << 0;
}
