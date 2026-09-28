#include <iostream>
#include<windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);


    float a;
    cout << "Введіть число a" << "\n";
    cin >> a;

    float b;
    cout << "Введіть число b" << "\n";
    cin >> b;

    float c;
    cout << "Введіть число c" << "\n";
    cin >> c;

    float D = b * b - 4 * a * c;
    if (D < 0) {
        cout << "Коренів немає" << "\n";
    }
    else if (D == 0) {
        cout << "Корінь один: " << -b / (2 * a) << "\n";
    }
    else {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);

        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }

    return 0;



}