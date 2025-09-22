#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a = 0, b = 0;
	cin >> a;
	vector<int> num;

	for (int i = 0; i < a; i++) {
		cin >> b;
		num.push_back(b);
	}
	int min = num[0];
	int max = num[0];

	for (int j = 0; j < a-1; j++) {
		if (num[j + 1] > max) {
			max = num[j+1];
		}
		if (num[j+1] < min) {
			min = num[j + 1];
		}
	}
	cout << min << " " << max <<'\n';
	
	return 0;
}