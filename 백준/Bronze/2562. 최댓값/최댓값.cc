#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;
	vector<int> num(9);

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = num[0];
	int max_index = 0;
	for (int j = 0; j < 8; j++) {
		if (num[j + 1] > max) {
			max = num[j+1];
			max_index = j + 1;
		}
	}
	cout << max << '\n';
	cout << max_index + 1 << '\n';
	
	return 0;
}