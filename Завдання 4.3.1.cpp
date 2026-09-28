#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	
	int a;
	cout << "Введіть бал";
	cin >> a;

	if (a >= 90 && a <= 100) {
		cout << "Ваша оцінка A" << "\n";
	}
	else if (a >= 82 && a <= 89) {
		cout << "Ваша оцінка B" << "\n";
	}
	else if (a >= 74 && a <= 81) {
		cout << "Ваша оцінка С" << "\n";
    }
	else if (a >= 64 && a <= 73) {
		cout << "Ваша оцінка D" << "\n";
	}
	else if (a >= 60 && a <= 63) {
         cout<<"Ваша оцінка E" << "\n";
	}
	else if (a >= 35 && a <= 59) {
		cout << "Ваша оцінка FX" << "\n";

	}
	else if (a >= 1 && a < 34) {
		cout << "Ваша оцінка F" << "\n";
	}
	else {
		cout << "Ви ввели не правильне число" << "\n";
	}

	return 0;

}