#include <iostream>
#include <string>

using namespace std;

int main()
{
	string one, two, three;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i += 2) {
		string* target;
		if (s[i] == '1') target = &one;
		else if (s[i] == '2') target = &two;
		else target = &three;
		if (target->empty()) *target = s[i];
		else *target = *target+"+"+s[i];
	}
	if (one.empty()) one = two;
	else if (!(two.empty())) one = one + "+" + two;
	
	if (one.empty()) one = three;
	else if (!(three.empty())) one = one + "+" + three;

	cout << one;
}
