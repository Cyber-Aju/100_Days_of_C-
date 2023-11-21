#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size of queue is: "<<q.size()<<endl;
    int popp = q.front();
    q.pop();
    cout << "Popped element : " << popp <<endl;
    cout<< "Current front element"<<q.front()<<endl;
    cout<< "Current back element"<<q.back()<<endl;
    cout << "Size of queue is: "<<q.size()<<endl;
}