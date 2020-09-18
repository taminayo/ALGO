#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;
	for (int i = 0, exit, enter, before = 0; i < N; i++) {
		cin >> exit >> enter;
		before = before - exit + enter;
		res = max(res, before);
	}
	cout << res;
}
