//2d matrix addition
#include<iostream>
using namespace std;

    int main()
    {
        cout<<"Enter rows";
        int row;
        cin>>row;

        cout<<"Enter columns";
        int columns;
        cin>>columns;

        int a[row][columns];
        int b[row][columns];
        int sum[row][columns];

        cout<<"Enter A Matrix";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter B Matrix";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cin>>b[i][j];
            }
        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<columns;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
                cout << sum[i][j] << " ";
            }
            cout<<endl;
        }
    }