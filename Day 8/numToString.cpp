#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<int, string> m
    {
        {1,"One"},{2,"Two"},{3,"Three"},{4,"Four"},{5,"Five"},{6,"Six"},{7,"Seven"},{8,"Eight"},{9,"Nine"},{10,"Ten"}
    };

    for(int i=0;i<n;i++)
    {
        if(m.find(a[i])!=m.end())
        {
            cout<< m.at(a[i]);
        }
        cout<<endl;
    }
}