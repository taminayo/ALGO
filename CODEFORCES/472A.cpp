#include <iostream>

using namespace std;

bool isPrime(int& num) {
	if (num < 2) return false;
	else {
		for (int i = 2; i < num; i++) {
			if (num%i == 0) return false;
		}
	}
	return true;
}
int main()
{
	int n, l = 4, r;;
	cin >> n;
	r = n - l;
	while (isPrime(r)) {
		l += 2;
		r = n - l;
	}
	cout << l << " " << r;
}
