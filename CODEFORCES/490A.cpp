#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

#define endl '\n';

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, t, c = 1;
	stack<int> p, m, e;
	cin >> N;
	while (N--) {
		cin >> t;
		if (t == 1) p.push(c);
		else if (t == 2) m.push(c);
		else e.push(c);
		c++;
	}
	int res = min(p.size(), min(m.size(), e.size()));
	cout << res << endl;
	while (res--) {
		cout << p.top() << " ";
		cout << m.top() << " ";
		cout << e.top() << endl;
		p.pop();
		m.pop();
		e.pop();
	}
}
