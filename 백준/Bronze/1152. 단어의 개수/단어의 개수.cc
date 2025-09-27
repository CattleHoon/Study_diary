#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int count = 0;
	char space = ' ';
	string N;
	getline(cin, N);
	for (int i = 0; i < N.size()-1; i++) {
		if (N[i] == space && N[i + 1] != space) count++;
	}
	if (!N.empty() && N[0] != space) count++;
	cout << count << '\n';

	return 0;
}