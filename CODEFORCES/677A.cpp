#include <iostream>

using namespace std;

int main()
{
	int N, h;
	cin >> N >> h;
	int res = N;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		if (t > h) res++;
	}
	cout << res;
}
