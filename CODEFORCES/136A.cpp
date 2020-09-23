#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr[temp - 1] = i + 1;
	}
	for (int* p = arr; p < arr + N; p++) {
		cout << *p << " "; 
	}
}
