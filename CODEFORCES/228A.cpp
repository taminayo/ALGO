#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> shoes;
	for (int i = 0, c; i < 4; i++) {
		cin >> c;
		shoes.insert(c);
	}
	cout << 4 - shoes.size();
}
