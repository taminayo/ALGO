#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int N, min_idx, max_idx, imin = numeric_limits<int>::max(), imax = numeric_limits<int>::min();
	cin >> N;
	for (int i = 0, t; i < N; i++) {
		cin >> t;
		if (t <= imin) {
			imin = t;
			min_idx = i;
		}
		if (t > imax) {
			imax = t;
			max_idx = i;
		}
	}
	if (min_idx == max_idx) cout << 0;
	else if (min_idx < max_idx) cout << max_idx + N - 1 - min_idx - 1;
	else cout << max_idx + N - 1 - min_idx;
}
