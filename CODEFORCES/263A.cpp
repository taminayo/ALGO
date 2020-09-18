#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++){
			cin >> t;
			if (t == 1) {
				cout << abs(j-2) + abs(i-2);
				return 0;
			}
		}
	}
}
