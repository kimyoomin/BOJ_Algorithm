#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	int arr[10001] = {};
	
	// 소수x = 1
	arr[0] = 1;
	arr[1] = 1;

	int res = 0;
	int min_v = -1;

	for (int i = 2; i <= b; i++) {
		if (arr[i] == 1) continue;
		if (i >= a) {
			res += i;
			if (min_v == -1) min_v = i;
		}
		for (int j = i * 2; j <= b; j+=i) {
			arr[j] = 1;
		}
	}

	if (res == 0) {
		cout << -1;
	}
	else {
		cout << res << "\n" << min_v;
	}
}

