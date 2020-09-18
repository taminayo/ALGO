#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, n, w;
	cin >> k >> n >> w;
	long long res;
	res = k*(w+1)*w/2;
	if (n > res) cout << 0;
	else cout << res - n;
}
