#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0, e; i < N; i++) {
		cin >> e;
		if ((e/2)%2 != 0) cout << "NO" << endl;
		else {
			string even, odd;
			cout << "YES" << endl;
			for (int j = 0; j < e/2; j++) {
				even += to_string(2*(j+1)) + " ";
				if (j < e/2 - 1) odd += to_string(2*(j+1)-1) + " ";
			}
			odd += to_string(e-1+e/2);
			cout << even << odd << endl;
		}
	}
}
