#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> num;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		num.push_back(a);
		cin >> num[i];
	}
	int b, sum = 0;
	cin >> b;
	for (int j = 0; j < a; j++) {
		if (num[j] == b) {
			sum ++;
		}
	}
	cout << sum << '\n';
	return 0;
}