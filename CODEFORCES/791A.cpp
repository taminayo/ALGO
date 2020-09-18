#include <iostream>

using namespace std;

int main()
{
	int l, b, res = 0;
	cin >> l >> b;
	while (l <= b) {
		l *= 3;
		b *= 2;
		res++;
	}
	cout << res;
}
