#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "Tetrahedron") res += 4;
		else if (s == "Cube") res += 6;
		else if (s == "Octahedron") res += 8;
		else if (s == "Dodecahedron") res += 12;
		else res += 20;
	}
	cout << res;
}
