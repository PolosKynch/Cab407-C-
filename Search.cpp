#include <iostream>
#include <string>
#include <cctype> // для tolower()
using namespace std;

string colorizeText(const string& text, const string& word) {
    string result;
    for (char c : text) {
        if (word.find(tolower(c)) != string::npos) {
            result += "\033[35m" + string(1, c) + "\033[0m";
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    setlocale(0, "");
    
    cout << "Введите текст: ";
    string text;
    getline(cin, text);

    cout << "Введите символы для выделения: ";
    string word;
    getline(cin, word);

    cout << "Результат: " << colorizeText(text, word) << endl;
}
