//Need to write a program to sum of all elements only if it is positive.
#include<iostream>
using namespace std;

int SumOfArray(int n,int a[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            sum+=a[i];
        }
    }
    return sum;
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
    int sum=SumOfArray(num,a);
    cout<<"Sum of given array is:"<< sum << endl;
    return 0;
}