#include <iostream>
#include <map>

using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;
	typedef pair<int, int> i_pair;
	map<int, i_pair> umap;
	for (int i = 0, h, a; i < N; i++) {
		cin >> h >> a;
		umap[i] = i_pair(h, a);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (umap[i].first == umap[j].second) res++;
			if (umap[i].second == umap[j].first) res++;
		}
	}
	cout << res;
}
