#include <iostream>
#include <windows.h>
using namespace std;

int main () {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char from;
    char to;
    double temp;
    double result;

    cout << "Из какой единицы переводим? (C/F/K): ";
    cin >> from;
    cout << "Какая температура? ";
    cin >> temp;
    cout << "В какую единицу переводим? (C/F/K): ";
    cin >> to;
    if (from == 'C' && to == 'F') {
            result = temp * 9.0 / 5.0 + 32;
    }
    if (from== 'C' && to == 'K') {
            result = temp + 273.15;
    }
    if (from== 'F' && to == 'C') {
            result = (temp - 32) * 5.0 / 9.0;
    }
    if (from== 'F' && to == 'K') {
            result = (temp - 32) * 5.0 / 9.0 + 273.15;
    }
    if (from== 'K' && to == 'C') {
            result = temp - 273.15;
    }
    if (from== 'K' && to == 'F') {
            result = (temp - 273.15) * 9.0 / 5.0 + 32;
    }
    if (from == to) {
        result = temp;
    }
    if (to == 'F') cout << "Результат: " << result << " °F" << endl;
    if (to == 'C') cout << "Результат: " << result << " °C" << endl;
    if (to == 'K') cout << "Результат: " << result << " K" << endl;

     cout << "Результат: " << result<< " " << to << endl;

return 0;
}
