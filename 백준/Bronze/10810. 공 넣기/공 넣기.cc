#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;
	cin >> a >> b;
	vector<int> num(a);

	for (int r = 0; r < b; r++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int c = i-1; c <= j-1; c++) {
			num[c] = k;
		}
	}
	for (int f = 0; f < a; f++)	cout << num[f] << " ";
	cout << '\n';

	return 0;
}