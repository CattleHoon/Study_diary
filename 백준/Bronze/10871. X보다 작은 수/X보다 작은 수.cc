#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	
	int a = 0;
	int b;
	cin >> a >> b;
	vector<int> num(a);

	for (int j = 0; j < a; j++) {
		cin >> num[j];
	}
	for (int i = 0; i < a; i++) {
		if (num[i] < b) cout << num[i] << " ";
	}
	
	return 0;
}