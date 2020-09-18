#include <iostream>

using namespace std;

int main()
{
	int t, c;
	cin >> t >> c;
	while (c) {
		c--;
		if (t % 10 == 0) t /= 10;
		else t--;
	}
	cout << t;
}
