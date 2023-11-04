//Need to write a program to find out the least and highest element.
#include <iostream>
using namespace std;

int minimum(int n,int a[])
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int maximum(int n,int a[])
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
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
    int min=minimum(num,a);
    int max=maximum(num,a);
    cout<<"Maximum of given array is:"<< max << endl;
    cout<<"Minimum of given array is:"<< min << endl;
    return 0;
}