#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	string e, o;
	for (int i = 0; i < m; i++) {
		e += "#";
		if (i < m - 1) o += ".";
		else o += "#";
	}
	string t(o);
	reverse(t.begin(), t.end());
	for (int i = 0; i < n; i++) {
		if (i%2 == 0) cout << e << endl;
		else if (i%4 == 1) cout << o << endl;
		else cout << t << endl;
	}
}
