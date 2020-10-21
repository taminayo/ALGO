#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k, res = 0;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	for (int i = 0; i < n/3; i++) {
		if (*(arr + i*3 + 2) + k <= 5) res++;
	}
	cout << res;
}
