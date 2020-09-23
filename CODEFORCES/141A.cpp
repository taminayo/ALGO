#include <iostream>
#include <string>
#include <map>

using namespace std;

void helper(string& s, map<char, int>& m) {
	for (string::iterator it = s.begin(); it < s.end(); it++) {
		m[*it]++;
	}
}
int main() {
	string f, s, p;
	cin >> f >> s >> p;
	map<char, int> cmap;
	helper(f, cmap);
	helper(s, cmap);

	for (string::iterator it = p.begin(); it < p.end(); it++) {
		if (cmap.find(*it) == cmap.end()) {
			cout << "NO";
			return 0;
		} else if (cmap[*it] == 1) {
			cmap.erase(*it);
		} else {
			cmap[*it]--;
		}
	}
	if (cmap.size() > 0) cout << "NO";
	else cout << "YES";
	return 0;
}
