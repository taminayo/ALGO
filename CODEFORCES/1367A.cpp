#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (string::iterator it = s.begin(); it < s.end(); it += 2) {
			cout << *it;
		}
		cout << *(s.end()-1) << endl;
	}
}
