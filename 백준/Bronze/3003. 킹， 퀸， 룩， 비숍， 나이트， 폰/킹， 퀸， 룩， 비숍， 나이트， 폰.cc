#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int chess_pieces[6] = { 1,1,2,2,2,8 };
	int chess_pieces_now[6] = {0,0,0,0,0,0};
	for (int i = 0; i < 6; i++) {
		cin >> chess_pieces_now[i];
		chess_pieces_now[i] = chess_pieces[i] - chess_pieces_now[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << chess_pieces_now[i] << " ";
	}

	return 0;
}