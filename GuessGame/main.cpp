#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    srand(time(0));

    int gamesPlayed = 0;
    int wins = 0;
    int losses = 0;
    char again;

    do {
        int secret = rand() % 100 + 1;
        int guess;
        int attempts = 0;
        const int MAX_ATTEMPTS = 7;
        bool won = false;

        gamesPlayed++;

        cout << "\n=== Игра 'Угадай число' ===" << endl;
        cout << "Я загадал число от 1 до 100." << endl;
        cout << "У тебя " << MAX_ATTEMPTS << " попыток. Удачи!" << endl << endl;

        while (attempts < MAX_ATTEMPTS) {
            cout << "Попытка " << (attempts + 1) << "/" << MAX_ATTEMPTS << ". Твой вариант: ";
            cin >> guess;
            attempts++;

            if (guess < secret) {
                cout << "Больше!" << endl;
            } else if (guess > secret) {
                cout << "Меньше!" << endl;
            } else {
                cout << "\n🎉 Правильно! Ты угадал число " << secret << endl;
                cout << "Количество попыток: " << attempts << endl;
                won = true;
                wins++;
                break;
            }
        }

        if (!won) {
            cout << "\n😢 Попытки закончились! Число было: " << secret << endl;
            losses++;
        }

        cout << "\nСыграно партий: " << gamesPlayed
             << " | Побед: " << wins
             << " | Поражений: " << losses << endl;

        cout << "\nХочешь сыграть ещё? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nСпасибо за игру! До встречи. 👋" << endl;
    return 0;
}
