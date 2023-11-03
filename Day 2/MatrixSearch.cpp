//2d Matrix search
#include<iostream>
using namespace std;

int main()
{
    int row;
        cout<<"Enter rows";
        cin>>row;

    int columns;
        cout<<"Enter columns";
        cin>>columns;

        int a[row][columns];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cin>>a[i][j];
            }
        }

        int searc;
        cout<<"Enter number to find in this matrix";
        cin>>searc;
        bool value=false;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(searc==a[i][j])
                {
                    value=true;
                    break;
                }
            }
            if(value)
            break;
        }
              if (value) {
            cout<<"Found!!";
        } else {
            cout<<"Sorry, Not Found!!";
        }
}
