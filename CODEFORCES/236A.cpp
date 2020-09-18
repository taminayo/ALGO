#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	set<char> cset;
	string s;
	cin >> s;
	for (char c : s)
		if (cset.find(c) == cset.end()) cset.insert(c);
	if (cset.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
}	
