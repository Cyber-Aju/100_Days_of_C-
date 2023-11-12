//IPValidator
/*
Accept:
127.0.0.1
192.168.1.1
192.168.1.255
255.255.255.255
0.0.0.0
1.1.1.01    
    
Reject:
30.168.1.255.1
127.1
192.168.1.256
-1.2.3.4
1.1.1.1.
3...3
*/

#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main() {
    string IP;
   cout << "Enter a IP Address (0.0.0.0): ";
    getline(cin, IP);

    regex pattern("^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");

    if (regex_match(IP, pattern)) {
        cout << "Valid IP" << endl;
    } else {
        cout << "Invalid IP address!" << endl;
    }

    return 0;
}