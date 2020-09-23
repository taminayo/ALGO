#include <iostream>
#include <set>
#include <string>

using namespace std;

bool isDistinct(int num) {
	set<int> nset;
	int l = to_string(num).length();
	for (int i = 0; i < l; i++) {
		if (nset.find(num%10) != nset.end()) return false;
		nset.insert(num%10);
		num /= 10;
	}
	return true;

}
int main()
{
	int N;
	cin >> N;
	N++;
	while (!isDistinct(N)) {
		N++;
	}
	cout << N;
}
