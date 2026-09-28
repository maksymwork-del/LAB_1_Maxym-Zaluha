#include <iostream>
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    float a;
    cout << "Введіть перше число" <<"\n";
    cin >> a;

    float b;
    cout << "Введіть друге  число" << "\n";
    cin >> b;

    char op;
	cout << "Введіть операцію (+, -, *, /): " << "\n";
    cin >> op;

    switch (op) {
    case '+':
        cout << a + b << "\n";
        break;
    case '-':
        cout << a - b << "\n";
        break;
    case '*':
        cout << a * b << "\n";
        break;
    case '/':
        if (b == 0) {
			cout << "Помилка: ділення на нуль!" << "\n";
            return 1;
        }
        else {
            cout << a / b << "\n";
        }
        break;

    default:
        cout << "Невідомий оператор!" << "\n";
        
    }
    return 0;
    



}