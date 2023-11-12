//EmailExtraction
#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    regex emailPattern("([\\w.+-]+|[\\w.+-][0-9])+@[\\w-]+\\.[\\w.-]+");
    string inputString = "Some text with email addresses user@example.com and another.user123@gmail.com";

    sregex_iterator iterator(inputString.begin(), inputString.end(), emailPattern);
    sregex_iterator end;

    while (iterator != end) {
        smatch match = *iterator;
        cout << "Found email: " << match.str() << endl;
        ++iterator;
    }

    return 0;
}
