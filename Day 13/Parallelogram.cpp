//Parallelogram
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            int s=n-i;
            while(s>0)
            {
                cout<<"  ";
                s--;
            }
            for(int j=1;j<=n;j++)
            {
                //if(i==1 || i==n || j==1 || j==n)
                //{
                    cout<<"* ";
                //}
                //else
                //{
                //    cout<<"  ";
                //}
            }
            cout<<endl;
        }
    return 0;
}





        