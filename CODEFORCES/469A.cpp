#include <iostream>
#include <set>

using namespace std;

int main()
{
	int N, h;
	cin >> N;
	set<int> nset;
	for (int i = 0; i < N; i++) {
		nset.insert(i+1);
	}
	for (int i = 0; i < 2; i++) {
		cin >> h;
		for (int j = 0, l; j < h; j++) {
			cin >> l;
			if (nset.find(l) != nset.end()) {
				nset.erase(l);
			}
		}
	}
	if (nset.empty()) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}
