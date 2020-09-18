#include <iostream>

using namespace std;

int main()
{
	int N, res = 0;
	char before;
	cin >> N >> before;
	for (int i = 1; i < N; i++) {
		char c;
		cin >> c;
		if (before == c) res++;
		before = c;
	}
	cout << res;
}
