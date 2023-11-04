//Need to write a program to count the number of even and odd elements.
#include<iostream>
using namespace std;

void OddEvenCount(int n,int a[])
{
    int ECount=0, OCount=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ECount++;
        }
        else
        {
            OCount++;
        }
    }
    cout<<"Odd Element of given array is:"<< OCount << endl;
    cout<<"Even Element of given array is:"<< ECount << endl;
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
    OddEvenCount(num,a);
    return 0;
}