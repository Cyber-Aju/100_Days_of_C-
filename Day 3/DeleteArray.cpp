//Write a program to delete an element from the given array.
#include<iostream>
using namespace std;

void DeleteArray(int n,int a[],int k)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(k==a[i])
        {
            found=i;
            break;
        }
    }
    if(found!=0)
    {
        for(int i=found;i<(n-1);i++)
        {
            a[i]=a[i+1];
        }
    }
}

int main()
{
    int num;
    cout<<"Enter No. of array"<<endl;
    cin>>num;
    int a[num];
    cout<<"Enter array Elements"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter Key element to delete in this array"<<endl;
    cin>>k;
    DeleteArray(num,a,k);
    //cout<<"Distinct Element of given array is:"<< CD << endl;
    cout << "Array after deleting element " << k << ": ";
    for (int i = 0; i < num-1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}