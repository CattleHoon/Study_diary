#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num[26] = {
		2,2,2,
		3,3,3,
		4,4,4,
		5,5,5,
		6,6,6,
		7,7,7,7,
		8,8,8,
		9,9,9,9
	};

	string callnum;
	cin >> callnum;
	int time = 0;

	for (char c : callnum) {
		int index = c - 'A';
		int dial_num = num[index];
		time += (dial_num + 1);
	}
	cout << time << '\n';

	return 0;
}