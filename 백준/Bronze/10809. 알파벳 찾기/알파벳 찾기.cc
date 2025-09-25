#include <iostream>
#include <cctype>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	string s;
	int al[26];
	fill(al, al + 26, -1);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if(al[(s[i] - 'a')] == -1)	al[s[i] - 'a'] =  i;
	}
	for (int i = 0; i < 26; i++) cout << al[i] << " ";

	return 0;
}