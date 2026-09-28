#include <iostream>
#include <windows.h>
using namespace std;


int main() {
  SetConsoleOutputCP(CP_UTF8);
  int a;
  cout << "Введіть день тижня" << "\n";
  cin >> a;

  int b;
  cout << "Введіть число" << "\n";
  cin >> b;

  int c;
  cout << "Введіть місяць" << "\n";
  cin >> c;

  int d;
  cout << "Введіть рік" << "\n";
  cin >> d;

  switch (a) {
  case 1:
    cout << "Понеділок" << " ";
    break;
  case 2:
    cout << "Вівторок" << " ";
    break;
  case 3:
    cout << "Середа" << " ";
    break;
  case 4:
    cout << "Четвер" << " ";
    break;
  case 5:
    cout << "П'ятниця" << " ";
    break;
  case 6:
    cout << "Субота" << " ";
    break;
  case 7:
    cout << "Неділя" << " ";
    break;
  default:
    cout << "Ви ввели не првильне значення" << " ";
  }
  cout << b << " ";



  switch (c) {
  case 1:
    cout << "Січня" << " ";
    break;
  case 2:
    cout << "Лютого" << " ";
    break;
  case 3:
    cout << "Березня" << " ";
    break;
  case 4:
    cout << "Квітня" << " ";
    break;
  case 5:
    cout << "Травеня" << " ";
    break;
  case 6:
    cout << "Червня" << " ";
    break;
  case 7:
    cout << "Липня" << " ";
    break;
  case 8:
    cout << "Серпня" << " ";
    break;
  case 9:
    cout << "Вересня" << " ";
    break;
  case 10:
    cout << "Жовтня" << " ";
    break;
  case 11:
    cout << "Листопада" << " ";
    break;
  case 12:
    cout << "Грудня" << " ";
    break;

  default:
    cout << "Ви ввели не правильне значення" << "\n";
  }

  cout << d << " року" << "\n";



  if ((c == 1 && b >= 20) ||  (c == 2 &&b <= 18)) {
    cout << "Водолій";

  }
  else if ((c == 2 && b >= 19) || (c == 3 && b <= 20)) {
    cout << "Риби";
  }
  else if ((c == 3 && b >= 21) || (c == 4 && b <= 19)) {
    cout << "Овен";

  }
  else if ((c == 4 && b >= 20) || (c == 5 && b <= 20)) {
    cout << "Телець";
  }
  else if ((c == 5 && b >= 21) || (c == 6 && b <= 20)) {
    cout << "Близнюки";

  }
  else if ((c == 6 && b >= 21) || (c == 7 && b <= 22)) {
    cout << "Рак";
  }
  else if ((c == 7 && b >= 21) || (c == 8 && b <= 22)) {
    cout << "Лев";
  }
  else if ((c == 8 && b >= 23) || (c == 9 && b <= 22)) {
    cout << "Діва";
  }
  else if ((c == 9 && b >= 23) || (c == 10 && b <= 22)) {
    cout << "Терези";
  }
  else if ((c == 10 && b >= 23) || (c == 11 && b <= 21)) {
    cout << "Скорпіон";

  }
  else if ((c == 11 && b >= 22) || (c == 12 && b <= 21)) {
    cout << "Стрілець";
  }
  else if ((c == 12 && b >= 22) || (c == 1 && b <= 19)) {
    cout << "Козеріг";
  }
  else {
    cout << "Не правильне введенння";
  }

  return 0;
}