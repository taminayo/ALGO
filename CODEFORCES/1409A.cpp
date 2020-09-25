#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, a, b, t; i < N; i++) {
		cin >> a >> b;
		if (b > a) t = b - a;
		else t = a - b;
		if (t%10 == 0) cout << t/10 << endl;
		else cout << t/10 + 1 << endl;
	}
}
