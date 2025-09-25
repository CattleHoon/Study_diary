#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int T = 0;
	string s;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		cout << s[0] << s[s.size()-1] << '\n';
	}

	return 0;
}