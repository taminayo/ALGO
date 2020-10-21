#include <iostream>

using namespace std;

#define endl '\n';

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	while (N--) {
		int n, w, t, o = 0, e = 0, res = 0, count = 0;
		bool off = true;
		cin >> n;
		w = n;
		while (n--) {
			cin >> t;
			if (t%2==0) e++;
			else o++;
			if (t%2 != count%2) {
				if (off) res++;
				off = !off;
			}
			count++;
		}
		if ((w+1)/2 != e || !off) {
			cout << -1 << endl;
		} else {
			cout << res << endl;
		}
	}
}
