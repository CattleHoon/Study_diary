#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int student;
	vector<int> num(30);

	for (int r = 0; r < 30; r++) {
		num[r] = 0;
	}
	for (int r = 0; r < 28; r++) {
		cin >> student;
		num[student-1] = 1;
	}
	for (int r = 0; r < 30; r++) {
		if (num[r] != 1) cout << r+1 << '\n';
	}

	cout << '\n';

	return 0;
}