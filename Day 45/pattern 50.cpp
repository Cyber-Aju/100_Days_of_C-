#include <bits/stdc++.h>
using namespace std;

void pattern (int n)
{
    int x=1, y=n;
    int t1=(n*3)-2,t2=y,r1=2,r2=3;
                    int a=n+1;
                    int b=(y*2)+2;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            if(i==j)
            {
                cout<<t2<<" ";
                t2--;
            }
            else if(r1==i && ((i+j)%2)!=0 && i==j+1)// 21--9
            {
                cout<<a<<" ";
                a++;
                r1++;
            }
            else if(r2==i && ((i+j)%2)==0 && i==j+2)// 31--12
            {
                cout<<b<<" ";
                b--;
                r2++;
            }
            else if(i==n && j==x)
            {
                cout<< n*3<<" ";
            }
            else
            {
                cout<<t1<<" ";
                t1++;
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