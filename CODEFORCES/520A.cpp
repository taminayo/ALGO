#include <iostream>
#include <set>

using namespace std;

int main()
{
	int N;
	cin >> N;
	set<char> cset;
	if (N < 'z'-'a'+1) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < N; i++) {
		char c;
		cin >> c;
		cset.insert(tolower(c));
	}
	if (cset.size() < 'z'-'a'+1) cout << "NO";
	else cout << "YES";
	return 0;
}
