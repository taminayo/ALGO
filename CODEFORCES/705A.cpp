#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string l = "I love", h = "I hate";
	for (int i = 0; i < N; i++) {
		if (i == 0) cout << h;
		else if (i%2 == 1) cout << " that " << l;
		else cout << " that " << h;
	}
	cout << " it";
}
