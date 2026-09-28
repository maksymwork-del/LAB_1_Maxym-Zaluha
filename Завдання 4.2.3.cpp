#include <iostream> 
#include <cmath>
#include <windows.h>
using namespace std;


int main() {

	SetConsoleOutputCP(CP_UTF8);

	float a = 5;
	float b = 6;
	float c = 7;

	int p = (a + b + c)/2;
	
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площа трикутника " << S << "\n";

	float r = S / p;
	cout << "Радіус вписаного кола " << r << "\n";

	float R = (a * b * c) / (4 * S);
	cout << "Радіус описаного кола " << R << "\n";

	float h_a = (2 * S) / a;
	cout << "Висота трикутника сторони a : " << h_a << "\n";
	float m_a = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
	cout << "Медіана сторони a : " << m_a << "\n";



	float h_b = (2 * S) / b;
	cout << "Висота трикутника сторгни b :" << h_b << "\n";
	float m_b = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
	cout << "Медіана сторони b : " << m_b << "\n";

	float h_c = (2 * S) / c;
	cout << "Висота трикутника сторони с: " << h_c << "\n";
	float m_c = 0.5 * sqrt(2 * (a * a) + 2 * (b * b) - (c * c));
	cout << "Медіана сторони c : " << m_c << "\n";


	float Angle_A = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / 3.14;
	cout << "Кут А: " << Angle_A << "\n";
	float Angels_B = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / 3.14;
	cout << "Кут B: " << Angels_B << "\n";
	float Angels_C = acos((a * a + b * b - c * c) / (2 * a * b)) * 180 / 3.14;
	cout << "Кут C: " << Angels_C << "\n";


}
