#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[31] = {};

	for (int i = 0; i < 28; i++) {
		int a;
		cin >> a;
		arr[a] = 1;
	}

	int cnt = 0;
	
	for (int i = 1; i < 31; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
			cnt += 1;
			if (cnt == 2) break;
		}
		else {
			continue;
		}
	}

}

