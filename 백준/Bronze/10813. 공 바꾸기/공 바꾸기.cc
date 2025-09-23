#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;
	cin >> a >> b;
	vector<int> num(a);
	for (int q = 0; q < a; q++) num[q] = q + 1;

	for (int r = 0; r < b; r++) {
		int i, j, s = 0;
		cin >> i >> j;
		s = num[i-1];
		num[i-1] = num[j-1];
		num[j-1] = s;
	}
	for (int f = 0; f < a; f++)	cout << num[f] << " ";
	cout << '\n';

	return 0;
}