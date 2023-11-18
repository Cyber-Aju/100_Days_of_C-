#include <iostream>
#include <stack>

using namespace std;

void swapStacks(stack<int> stack1, stack<int> stack2)
{
    cout<<"Stack 1 elements: "<<endl;
    while(!stack1.empty())
    {
        cout<<stack1.top()<<endl;
        stack1.pop();
    }
    cout<<"Stack 2 elements: "<<endl;
    while(!stack2.empty())
    {
        cout<<stack2.top()<<endl;
        stack2.pop();
    }
}

int main()
{
    stack<int> stack1;
    stack<int> stack2;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    stack2.push(4);
    stack2.push(5);
    stack2.push(6);

    cout<<"Before swapping 2 stacks :"<<endl;
    swapStacks(stack1,stack2);

    cout<<"After swapping 2 stacks :"<<endl;
    stack1.swap(stack2);
    swapStacks(stack1,stack2);
}



