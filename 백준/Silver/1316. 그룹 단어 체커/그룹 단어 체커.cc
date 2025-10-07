#include<iostream>
#include<string>
using namespace std;

int main() {

	int count = 0;
	int Q = 0;
	cin >> Q;

	
	string N;
	for (int r = 0; r < Q; r++)
	{
		int alpha[26] = { 0 };
		bool TF = true;
		cin >> N;
		for (int i = 1; i < N.size(); i++) {
			if (N[i] != N[i - 1]) {
				alpha[N[i - 1] - 'a'] = 1;
				if (alpha[N[i] - 'a'] == 1) {
					TF = false;
					break;
				}
			}
		}
		if(TF) count++;
	}
	cout << count << endl;

	return 0;
}