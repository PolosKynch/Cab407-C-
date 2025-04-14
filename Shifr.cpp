#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

char atbashChar(char c) {
    if (!isalpha(c)) {
        return c; 
    }
    char base = isupper(c) ? 'A' : 'a';
    return base + ('Z' - toupper(c)); 
}
string atbash(const string& text) {
    string result;
    result.reserve(text.size()); 
    for (char c : text) {
        result += atbashChar(c);
    }
    return result;
}
int main() {
    setlocale(LC_ALL, ""); 
    cout << "Введите текст для шифрования: ";
    string text;
    getline(cin, text);
    string encrypted = atbash(text);
    cout << "Зашифрованный текст: " << encrypted << "\n";
    return 0;
}
