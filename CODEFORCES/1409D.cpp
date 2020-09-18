#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		long long n, r;
		cin >> n >> r;
		int l = to_string(n).length();
		for (int i = l-1; i >= 0; i--) {
			long long t = pow(10, i);
			long long m = n / t;
			long long rest = n % t;
			if (m == r && rest == 0) {
				r = 0;
				cout << 0 << endl;
				break;
			} else if (m < r) {
				r -= m;
			} else {
				r = 0;
				cout << t*10 - n << endl;
				break;
			}
			n = rest;
		}
		if (r > 0) cout << 0 << endl;
	}
}
