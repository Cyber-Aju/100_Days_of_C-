#include <iostream>
using namespace std;

void noMatrix(int m, int n)
{
    int s=m;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    //cout<<(s-1)<<endl; 17
    /*
    for (int i=n;i>=1;i--)
    {
        while(s!=(m-1))
        {
            for(int j=n;j>=1;j--)
            {
                cout<<s<<" ";
                s--;
            }
            cout<<"\n";
        }
    }
*/

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++){
            cout << s-1<<" ";
            s--;}
        cout << endl;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    noMatrix(n,m);
}