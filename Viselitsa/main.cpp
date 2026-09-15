#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
srand(time(0));

cout << "=== Виселица ===" << endl;
vector<string> world = {
"компьютер",
"общага",
"энергетик",
"ружье",
"шкаф",
"ромчик",
"никитосик",
"лампа",
"машина",
"алгоритм",
"анечка",
"космос"
};
int index = rand() % world.size();

string secret = world[index];
string guessed(secret.length(), '_');
cout << "Слово: " << guessed << endl;
char letter;
int lives = 6;
while (lives > 0 && guessed != secret) {
        cout << endl;
        cout << "Слово: " << guessed << endl;
        cout << "Жизней: " << lives << endl;
        cout << "Введи букву: ";

        cin >> letter;
        bool found = false;
        for (int i = 0; i < (int)secret.length(); i++) {
            if (secret[i] == letter) {
                guessed[i] = letter;
                found = true;
            }
        }
        if (!found) {
            lives--;
            cout << "Нет такой буквы!" << endl;
        } else {
            cout << "Есть!" << endl;
        }
    }
 cout << endl;
 if (guessed == secret) {
    cout << "Победа! Ты угадал слово: " << secret << endl;
 } else {
     cout << "Проигрыш. Слово было: " << secret << endl;
 }
 return 0;
}
