//generateBinaryNo
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number to generate binary : ";
    cin>>n;
    queue<string> q;
    q.push("1");

    int i=1;
    while(i++ <= n)
    {
        q.push(q.front()+"0");
        q.push(q.front()+"1");

        cout << q.front() << endl;
        q.pop();
    }
}