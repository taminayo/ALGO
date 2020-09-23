#include <iostream>

using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;
	for (int i = 0, o, c; i < N; i++) {
		cin >> o >> c;
		if (c - o > 1) res++;
	}
	cout << res;
}
