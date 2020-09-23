#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,N,res = 0;
	cin >> a >> b >> c >> d >> N;
	for (int i = 1; i <= N; i++)
		if (i%a == 0 || i%b == 0 || i%c == 0 || i%d == 0) res++;
	cout << res;
}
