#include <iostream>

using namespace std;

int main()
{
	int N, p = 0, res = 0;
	cin >> N;
	for (int i = 0, t; i < N; i++) {
		cin >> t;
		if (t > 0) p += t;
		else if (p > 0) p--;
		else res++;
	}
	cout << res;
}
