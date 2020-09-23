#include <iostream>

using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;
	int bills[5] = {100, 20, 10, 5, 1};
	for (int i = 0; i < 5; i++) {
		res += n/bills[i];
		n %= bills[i];
		if (n == 0) {
			cout << res;
			return 0;
		}
	}
}
