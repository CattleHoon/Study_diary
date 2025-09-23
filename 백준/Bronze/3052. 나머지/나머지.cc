#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int  count = 0;
	vector<int> num(42);

	for (int r = 0; r < 42; r++) {
		num[r] = 0;
	}
	for (int r = 0; r < 10; r++) {
		int i;
		cin >> i;
		num[i % 42] = 1;
	}
	for (int r = 0; r < 42; r++) {
		if (num[r] == 1) count++;
	}
	cout << count << '\n';

	return 0;
}