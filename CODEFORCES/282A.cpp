#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int res = 0;
	for (int i = 0; i < N; i++) {
		string operation;
		cin >> operation;
		if (operation[0] == '+' || operation[1] == '+') res++;
		else res--;
	}
	cout << res;
}
