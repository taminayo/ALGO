#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[3], res = 0;
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	sort(arr, arr+3);
	for (int i = 0; i < 3; i++) res += abs(arr[i] - arr[1]);
	cout << res;
}
