#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

#define endl '\n';

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	while (N--) {
		int t, cmin = numeric_limits<int>::max(), omin = numeric_limits<int>::max();
		cin >> t;
		int c[t], o[t];
		long long res = 0;
		for (auto it = c; it < c + t; it++) {
			cin >> *it;
			cmin = min(cmin, *it);
		}
		for (auto it = o; it < o + t; it++) {
			cin >> *it;
			omin = min(omin, *it);
		}
		for(int i = 0; i < t; i++)
			res += (c[i] - cmin) + (o[i] - omin) - min(c[i] - cmin, o[i] - omin);
		cout << res << endl;
	}
}
