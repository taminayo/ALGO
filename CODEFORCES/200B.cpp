#include <iostream>

using namespace std;

int main()
{
	double N, s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		double t;
		cin >> t;
		s += t;
	}
	cout << s/N;
}
