#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int num1, num2;
    map<int, int> countNum1; // 원소의 빈도수를 저장할 맵
    map<int, int> countNum2; // 원소의 빈도수를 저장할 맵

    cin >> num1 >> num2;

    int count = 1;
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= num2; j++)
        {
            int num3;
            cin >> num3;
            countNum1[count] = num3; // 원소값 저장
            count++;
        }
    }

    count = 1;
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= num2; j++)
        {
            int num3;
            cin >> num3;
            countNum2[count] = num3; // 원소값 저장
            count++;
        }
    }

    count = 1;
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= num2; j++)
        {
            cout << countNum1[count] + countNum2[count] << " ";
            count++;
        }
        cout << endl;
    }

}