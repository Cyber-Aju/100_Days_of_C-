//Write a program to place Even Element in Even Index & Odd Element in Odd index
/*
Sample Input 0
6
2 3 4 7 6 1

Sample Output 0
2 3 4 7 6 1

Sample Input 1
4
4 6 5 2

Sample Output 1
4 5 6 2
*/


#include<iostream>
using namespace std;

void OddEvenArrange(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        if(!(a[i]%2==0))
        {
            for(int j=i+1;j<n;j+=2)
            {
                swap(a[i],a[j]);
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    OddEvenArrange(num,a);
    return 0;
}