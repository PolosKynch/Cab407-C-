#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");

    cout << "Введите текст: ";
    string text;
    getline(cin, text);

    cout << "Введите поисковое слово: ";
    string word;
    getline(cin, word);

    size_t pos = text.find(word);
    
    if (pos == string::npos) {
        cout << "Совпадение не найдено." << endl;
        return 0;
    }

    cout << text.substr(0, pos)
         << "\033[31m" << word << "\033[0m"
         << text.substr(pos + word.length()) 
         << endl;

    return 0;
}
