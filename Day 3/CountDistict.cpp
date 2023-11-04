//Need to write a program to count the no. of distinct elements.
#include<iostream>
using namespace std;

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

int CountDistinct(int n,int a[])
{
    int count=0;
    int max=maximum(n,a);
    int b[max+1]={0};
    for(int i=0;i<n;i++)
    {
        int k=a[i];
        b[k]++;
    }
    for(int i=0;i<(max+1);i++)
    {
        if(b[i]==1)
        {
            count++;
        }
    }
    return count;
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
    int CD=CountDistinct(num,a);
    cout<<"Distinct Element of given array is:"<< CD << endl;
    return 0;
}