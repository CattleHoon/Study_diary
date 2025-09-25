#include <iostream>
#include <cctype>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	char s;
	cin >> s;
	if (isdigit(s))
		cout << s + 0 << '\n';
	else if (isalpha(s)) {
		if (isupper(s)) cout << s + 0 << '\n';
		else cout << s + 0 << '\n';
	}

	return 0;
}