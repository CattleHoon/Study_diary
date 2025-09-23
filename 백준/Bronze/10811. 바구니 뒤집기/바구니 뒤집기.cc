#include <iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int N = 0, M = 0;
	cin >> N >> M;
	vector<int> num(N);
	for (int r = 0; r < N; r++) num[r] = r+1;
	for (int r = 0; r < M; r++) {
		int i, j;
		cin >> i >> j;
		int start = i - 1; //i와 j값이 변하면 안되기에 다른 변수를 설정
		int end = j - 1;
		for (int q =0; q < (j-i+1)/2; q++) { //(j-1+1)/2는 역순을 해야하는 횟수
			int repo = 0; //역순을 위해 값을 저장할 공간을 설정
			repo = num[start];
			num[start] = num[end];
			num[end] = repo;
			start++; end--;//한번의 역순이 끝났고 다음 역순으로 가야하기에 시작점은 +1 도착점은 -1을 해준다
		}
	}
	for (int r = 0; r < N; r++) cout << num[r] << " ";

	return 0;
}