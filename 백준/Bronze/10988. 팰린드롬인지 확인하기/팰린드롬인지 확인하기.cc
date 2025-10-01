#include <iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;
	string original_word = word;
	int start = 0, end = word.size()-1;
	for (int i = 0; i < word.size() / 2; i++) {
		int repo = 0;
		repo = word[start];
		word[start] = word[end];
		word[end] = repo;
		start++; end--;
	}
	if (original_word == word) cout << 1 << '\n';
	else cout << 0 << '\n';


	return 0;
}