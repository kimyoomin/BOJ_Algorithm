#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		printf("Case #%u: %u + %u = %u\n", i + 1, a, b, a + b);
	}

}

