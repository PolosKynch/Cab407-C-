#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    cout << "Количество символов: " << text.length();
}
