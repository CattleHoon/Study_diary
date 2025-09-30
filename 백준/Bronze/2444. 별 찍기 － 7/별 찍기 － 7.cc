#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int N = 0;
	cin >> N;
	for (int i = 1; i < N; i++) {
		for (int r = 0; r < N - i; r++)	cout << " ";
		for (int r = 0; r < 2*i-1; r++) cout << "*";
		cout << '\n';
	}
	for (int i = 0; i < 2 * N - 1; i++) cout << "*";
	cout << '\n';

	for (int i = N-1; i >= 1; i--) {
		for (int r = 0; r < N - i; r++)	cout << " ";
		for (int r = 0; r < 2 * i - 1; r++) cout << "*";
		cout << '\n';
	}
	return 0;
}