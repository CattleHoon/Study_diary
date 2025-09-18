#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
    int A, B;

    while (std::cin >> A >> B) {
        std::cout << A + B << std::endl;
    }
	return 0;
}