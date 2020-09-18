#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, T;
	cin >> S >> T;
	string::iterator its = S.begin();
	string::iterator itt = T.end()-1;
	while (its < S.end()) {
		if (*its != *itt) {
			cout << "NO";
			return 0;
		}
		its++;
		itt--;
	}
	cout << "YES";
	return 0;
}
