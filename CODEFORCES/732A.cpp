#include <iostream>

using namespace std;

int main()
{
	int p, b, d, res = 1;
	cin >> p >> d;
	b = p;
	while (!(b%10 == 0 || (b - d)%10 == 0)) {
		res++;
		b += p;
	}
	cout << res;
}
