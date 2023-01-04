#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,v;
	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}

	cin >> v;

	cout << count(arr.begin(), arr.end(), v);

}

