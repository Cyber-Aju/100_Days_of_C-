//DateValidator
#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main() {
    string sentence;
   cout << "Enter a date (DD-MM-YYYY): ";
    getline(cin, sentence);

    regex pattern("^([0-2][0-9]|(3)[0-1])-(((0)[0-9])|((1)[0-2]))-([1-2][0-9]{3})$");

    if (regex_match(sentence, pattern)) {
        cout << "Valid Date" << endl;
    } else {
        cout << "Not Valid" << endl;
    }

    return 0;
}
