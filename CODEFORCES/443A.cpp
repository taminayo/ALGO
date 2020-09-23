#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	set<char> cset;
	for (string::iterator it = s.begin(); it < s.end(); it++) {
		if (isalpha(*it) && cset.find(*it) == cset.end()) cset.insert(*it);
	}
	cout << cset.size();
}
