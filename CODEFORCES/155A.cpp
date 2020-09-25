#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, min_score, max_score, res = 0;
	cin >> N;
	cin >> min_score;
	max_score = min_score;
	for (int i = 1, t; i < N; i++) {
		cin >> t;
		if (t < min_score) res++;
		else if (t > max_score) res++;
		min_score = min(min_score, t);
		max_score = max(max_score, t);
	}
	cout << res;
}
