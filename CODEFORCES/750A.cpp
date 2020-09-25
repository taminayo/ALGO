#include <iostream>

using namespace std;

int main()
{
	int p, m, res = 0;
	cin >> p >> m;
	int c = 240 - m - 5;
	while (c >= 0 && res < p) {
		res++;
		c -= 5*(res+1);
	}
	cout << res;
}
