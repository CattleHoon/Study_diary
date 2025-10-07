#include<iostream>
#include<string>
#include<map>
#include<iomanip>
using namespace std;

int main() {

	string name;
    map<string, double> grade_map = {
    {"A+", 4.5},
    {"A0", 4.0},
    {"B+", 3.5},
    {"B0", 3.0},
    {"C+", 2.5},
    {"C0", 2.0},
    {"D+", 1.5},
    {"D0", 1.0},
    {"F", 0.0}
    };
    string grade;
	float grade_point = 0;
    float total_grade = 0;
    float total_grade_point = 0;
	for (int i = 0; i < 20; i++) {
		cin >> name >> grade_point >> grade;
        if (grade != "P") {
            float score = grade_map[grade];
            total_grade += (score*grade_point);
            total_grade_point += grade_point;
        }
	}
    cout << fixed;
    cout << setprecision(6);
    cout << total_grade / total_grade_point << endl;

	return 0;
}