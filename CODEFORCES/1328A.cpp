#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, t, d; i < N; i++) {
		cin >> t >> d;
		if (t%d == 0) cout << 0 << endl;
		else cout << (t/d+1)*d - t << endl;
	}
}
