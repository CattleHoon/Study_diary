#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;
int main() {
	int N = 0;
	cin >> N;
	vector <float> M(N);
	for (int i = 0; i < N; i++) {
		cin >> M[i];
	}
	float max = 0;
	for (int r = 0; r < N; r++) {
		if (max < M[r]) {
			max = M[r];
		}
	}
	float sum = 0;
	for (int i = 0; i < N; i++) {
		M[i] = M[i] / max * 100;
		sum += M[i];
	}
	cout << fixed;
	cout << setprecision(2);
	cout << sum / N << endl;
	return 0;
}