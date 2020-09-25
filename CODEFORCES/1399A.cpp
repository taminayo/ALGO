#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, l; i < N; i++) {
		cin >> l;
		int arr[l];
		for (int j = 0; j < l; j++)
			cin >> arr[j];
		sort(arr, arr+l);
		bool check = true;
		for (int j = 0; j < l - 1; j++) {
			if (!(arr[j] - arr[j+1] == 0 || arr[j] - arr[j+1] == 1 || arr[j+1] - arr[j] == 1)) {
				cout << "NO" << endl;
				check = false;
				break;
			}
		}
		if (check) cout << "YES" << endl;
	}
}
