#include <iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;

	int count = 0;
	for (int i = 0; i < word.size(); i++) {
		count++;
		if (word[i] == '=') {
			if (i >= 2 && word[i - 2] == 'd' && word[i - 1] == 'z') {
				count = count - 2;
			}
			else if (i >= 1 && word[i - 1] == 'z') count = count - 1;
			else count = count - 1;
		}
		else if (i >= 1 && word[i] == 'j') {
			if (word[i - 1] == 'n' || word[i - 1] == 'l')
				count = count - 1;
		}
		else if(word[i] == '-') count = count - 1;
	}
	cout << count << '\n';

	return 0;
}