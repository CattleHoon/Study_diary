#include <iostream>
#include <cctype>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int R = 0;
		cin >> R;
		string S;
		cin >> S;
		for (int r = 0; r < S.size(); r++) {
			for (int q = 0; q < R; q++) {
				cout << S[r];
			}
		}
		cout << '\n';
	}


	return 0;
}