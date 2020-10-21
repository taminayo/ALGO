#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int N, a, b, c;
	cin >> N;
	while (N--) {
		cin >> a >> b >> c;
		int t = c/a;
		if (t*a + b <= c) cout << (t*a + b) << '\n';
		else cout << t*a + b - a << '\n';
	}
}
