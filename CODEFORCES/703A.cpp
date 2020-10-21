#include <iostream>

using namespace std;

#define endl '\n';

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, c = 0, m = 0;
	cin >> n;
	while (n--) {
		int dc, dm;
		cin >> dm >> dc;
		if (dc > dm) c++;
		else if (dc < dm) m++;
	}
	if (c == m) cout << "Friendship is magic!^^";
	else if (c > m) cout << "Chris";
	else cout << "Mishka";
}
