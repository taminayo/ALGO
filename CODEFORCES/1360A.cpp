#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, a, b; i < N; i++) {
		cin >> a >> b;
		if (a < b) swap(a, b);
		if (2*b < a) cout << a*a << endl;
		else cout << 4*b*b << endl;
	}
}
