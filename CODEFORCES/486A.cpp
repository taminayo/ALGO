#include <iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;
	if (N%2 == 0) cout << N/2;
	else cout << -(N/2 + 1);
}
