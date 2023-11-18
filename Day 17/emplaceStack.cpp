#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> emplaceStack;
    emplaceStack.emplace(5);
    emplaceStack.emplace(13);
    emplaceStack.emplace(0);
    emplaceStack.emplace(9);
    emplaceStack.emplace(4);

    int count=0;

    while(!emplaceStack.empty())
    {
        count++;
        emplaceStack.pop();
    }
    cout<<count<<endl;
}