#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector <char>num1(3);
	vector <char>num2(3);
	vector <char>maxnum(3);
	int Num1=0,Num2=0;

	for (int i = 0; i < 3; i++) cin >> num1[i];
	for (int i = 0; i < 3; i++) cin >> num2[i];

	char savenum1 = num1[0];
	num1[0] = num1[2];
	num1[2] = savenum1;

	char savenum2 = num2[0];
	num2[0] = num2[2];
	num2[2] = savenum2;

	maxnum = max(num1, num2);
	for (int i = 0; i < 3; i++) cout << maxnum[i];
	return 0;
}