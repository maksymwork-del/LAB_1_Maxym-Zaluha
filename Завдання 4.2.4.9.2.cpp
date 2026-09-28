#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int cent;
	cout << " Введіть довжину у сантиметрах: ";
	cin >> cent;
	
	int metr = cent / 100;
	cout << "Довжина у метрах: " << metr << "\n";


}