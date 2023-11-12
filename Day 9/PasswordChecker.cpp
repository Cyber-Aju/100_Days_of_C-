//PasswordChecker
#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main() {
    string IP;
   cout << "Enter a Password (Ex:Testing193!): ";
    getline(cin, IP);

    regex pattern("^(?=.*\\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[a-zA-Z]).{8,}$");

    if (regex_match(IP, pattern)) {
        cout << "Valid Password" << endl;
    } else {
        cout << "Weak Password!!" << endl;
    }

    return 0;
}

//Mail Id : [a-zA-Z0-9-_.]+@[a-zA-Z0-9-_.]+