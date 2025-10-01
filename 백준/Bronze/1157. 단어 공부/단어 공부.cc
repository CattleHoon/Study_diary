#include <iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int alpha[26] = {0};
	string word;
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		if (isupper(word[i])) {
			alpha[word[i] - 'A'] += 1;
		}
		else
			alpha[word[i] - 'a'] += 1;
	}
	int max_count = 0;
	int max_index = 0;
	for (int i = 0; i < 26; i++) {
		if (max_count < alpha[i]) {
			max_count = alpha[i];
			max_index = i;
		}
	}
	
	int duplicate_count = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max_count) duplicate_count++;
	}

	if (duplicate_count > 1) cout << "?" << '\n';
	else {
		char result = static_cast<char>('A' + max_index);
		cout << result << '\n';
	}

	return 0;
}