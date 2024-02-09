#include <bits/stdc++.h>
using namespace std;

void pattern (int n)
{
    int x=1, y=n;
    int a=y;               //a=5
    int b=(n*2)-1;          //b=9
    int c=(n*2)+2;          //c=12
    int d=e-1;          //d=14
    int e=((n*n)/2)+(ceil(n/2.0)); //e=15 
    //int f=e+(ceil(n/2.0));
    //cout<<f<<endl;
    //constexpr double std::ceil<int>(int __x)
    
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            if(i==j)
            {
                cout<<a<<" ";
                a--;
            }
            else if( i==j+1)
            {
                cout<<b<<" ";
                b--;
            }
            else if(i==j+2)
            {
                cout<<c<<" ";
                c--;
            }
            else if(i==n && j==x)
            {
                cout<< e<<" ";
            }
            else
            {
                cout<<d<<" ";
                d--;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pattern (n);
}