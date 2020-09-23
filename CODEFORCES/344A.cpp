#include <iostream>

using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;
	char b;
	for (int i = 0; i < N; i++) {
		char p, m;
		cin >> p >> m;
		if (i == 0) res++;
		else if (b != p) res++;
		b = p;
	}
	cout << res;
}
