#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, lw, uw;
	int l = 0, u = 0;
	cin >> s;
	for (string::iterator it = s.begin(); it < s.end(); it++) {
		if (islower(*it)) {
			l++;
			lw += *it;
			uw += toupper(*it);
		} else {
			u++;
			lw += tolower(*it);
			uw += *it;
		}
	}
	if (l >= u) cout << lw;
	else cout << uw;
}
