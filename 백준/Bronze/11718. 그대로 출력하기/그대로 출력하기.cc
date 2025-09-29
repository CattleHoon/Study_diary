#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int linecount = 0;
	vector <string> word;
	string line;
	while (getline(cin, line)&&linecount < 100) {
		linecount++;
		word.push_back(line);
	}
	for (int i = 0; i < linecount; i++) {
		cout << word[i] << '\n';
	}
	return 0;
}