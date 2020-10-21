#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n';

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, a, b;
	cin >> N;
	while (N--) {
		int t;
		cin >> t;
		a = pow(2, t) - 2;
		b = pow(2, (t/2)) - 2;
		cout << abs(b + pow(2, t) - (a - b)) << endl;
	}
}
