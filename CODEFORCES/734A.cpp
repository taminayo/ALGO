#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, a = 0, d = 0;
	string S;
	cin >> N >> S;
	for (char c : S) {
		if (c == 'A') a++;
		else d++;
	}
	if (a == d) cout << "Friendship";
	else if (a > d) cout << "Anton";
	else cout << "Danik";
}
