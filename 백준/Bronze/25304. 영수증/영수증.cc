#include <iostream>

using namespace std;

int main() {
	int x, n;
	cin >> x >> n;
	int res = 0;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		res += a * b;
	}
	if (x == res) cout << "Yes";
	else cout << "No";

	return 0;
}

