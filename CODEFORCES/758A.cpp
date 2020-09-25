#include <iostream>

using namespace std;

int main()
{
	int N, max_w = 0, res = 0;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] > max_w) max_w = arr[i];
	}
	for (auto it = arr; it < arr+N; it++)
		res += max_w - *it;
	cout << res;
}
