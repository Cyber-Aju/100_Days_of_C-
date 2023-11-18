//reverseWordsUsingStack
#include<iostream>
#include<string>
#include<sstream>
#include<stack>
#include<algorithm>

using namespace std;

/*
void reverseWordsUsingStack(string name)
{
    string word;
    stringstream aja(name);
    while(aja>>word)
    {
        reverse(word.begin(), word.end());
        cout<< word << " ";
    }
}
*/

void reverseWords(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ')
            st.push(str[i]);

        else {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    }

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}


int main()
{
    string name = "Hi this is ajmal akram";
    //reverseWordsUsingStack(name);
    reverseWords(name);
}


