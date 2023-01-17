#include <iostream>

using namespace std;

int arr[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);


	
	int n;
	int t=0;
	int cnt;
	while (1) {
		cin >> n;

		if (n == 0) break;
		cnt = 0;
		if (n <= t) {
			for (int i = n+1; i <= 2 * n; i++) {
				if (arr[i] == 0) cnt++;
			}

			cout << cnt << "\n";

		}
		else {
			arr[0] = 1;
			arr[1] = 1;

			for (int i = 2; i <= 2 * n; i++) {
				if (arr[i] == 1) continue;
				if (i > n) cnt++;

				for (int j = i * 2; j <= 2*n; j += i) {
					arr[j] = 1;
				}
			}
			cout << cnt << "\n";
			t = n;
		}
	}
}

