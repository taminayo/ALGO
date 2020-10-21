#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n, k, res = 0;
		cin >> n >> k;
		int a[n], b[n];
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		for (int j = 0; j < n; j++) {
			cin >> b[j];
		}
		sort(a, a + n);
		sort(b, b + n, greater<>());
		for (int j = 0; j < n; j++) {
			if (k > 0 && a[j] < b[j]) {
				k--;
				res += b[j];
			} else res += a[j];
		}
		cout << res << endl;
	}
}
