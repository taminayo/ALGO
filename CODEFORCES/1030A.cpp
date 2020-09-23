#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, a; i < N; i++) {
		cin >> a;
		if (a == 1) {
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
	return 0;
}
