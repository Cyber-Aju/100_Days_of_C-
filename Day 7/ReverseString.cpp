#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


string reverseWords(string input) {
    stringstream ss(input);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());


    string reversedString;
    for (const string& w : words) {
        reversedString += w + " ";
    }


    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversedString = reverseWords(input);

    cout << "Reversed string: " << reversedString << endl;

    return 0;
}

