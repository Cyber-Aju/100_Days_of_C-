//reverseStringUsingStack
#include<iostream>
#include<string>
#include<stack>

using namespace std;

void reverseStringUsingStack(string &name)
{
    stack<char> s;
    for(auto it:name)
    s.push(it);
    name.clear();
    while(!s.empty()){
    name.push_back(s.top());
    s.pop();
  }
}

int main()
{
    string name="Ajmal akram";
    reverseStringUsingStack(name);
    cout<<"Reversed string is : "<<name;
}