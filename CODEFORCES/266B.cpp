#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, s, b = 0;
	string str;
	cin >> N >> s >> str;
	for (int i = 0; i < s; i++) {
		bool changed = false;
		string temp = str;
		for (string::iterator it = str.begin() + 1; it < str.end(); it++) {
			if (!changed && *(it-1) == 'B' && *it == 'G') {
				char t = *it;
				*it = *(it-1);
				*(it-1) = t;
				changed = true;
			} else {
				changed = false;
			}
		}
		if (temp == str) {
			cout << str;
			return 0;
		}
		temp = str;
	}
	cout << str;
	return 0;
}
