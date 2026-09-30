#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int diagon;
	cout << "Введіть 1 діагональ ромба"<<"\n";;
	cin >> diagon;

	int diagon_2;
	cout << "Введіть 2 діагональ ромба" << "\n";;
	cin >> diagon_2;


	int S = 0.5 * diagon * diagon_2;
	cout << "Площа ромба:" << S << "\n";

}
