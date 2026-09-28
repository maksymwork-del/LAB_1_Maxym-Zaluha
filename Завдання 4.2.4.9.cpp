#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int a;
	cout << "Введіть довжину паралелепіпеда ";
	cin >> a;
	int b;
	cout << "Введіть ширину паралелепіпеда ";
	cin >> b;
	int c;
	cout << "Введіть висоту паралелепіпеда ";
	cin >> c;

	int V = a * b * c;
	cout << V << " - об'єм паралелепіпеда\n";


}