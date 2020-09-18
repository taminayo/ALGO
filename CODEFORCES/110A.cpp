#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long N;
	int L, res = 0;
	cin >> N;
	L = to_string(N).length();
	for (int i = 0; i < L; i++) {
		if (res > 7 || (res > 4 && 7 - res > L - i) || (res < 4 && 4 - res > L - i)) {
			cout << "NO";
			return 0;
		}
		if (N % 10 == 4 || N % 10 == 7) res++;
		N /= 10;
	}
	if (res == 4 || res == 7) cout << "YES";
	else cout << "NO";
	return 0;
}
