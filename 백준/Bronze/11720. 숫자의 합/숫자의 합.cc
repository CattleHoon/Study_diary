#include <iostream>
#include <cctype>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int N = 0, sum = 0;
	char s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		sum = (s - '0') + sum;
	}
	cout << sum << '\n';

	return 0;
}