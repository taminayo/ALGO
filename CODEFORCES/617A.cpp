#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int res = N/5;
	if (N % 5 != 0) res++;
	cout << res;
}
