//Given an array of numbers Print the numbers without duplication.
#include<iostream>
#include <unordered_set>
using namespace std;

void RmveDuplication(int n,int a[])
{
    unordered_set<int> RDuplication;
    for(int i=0;i<n;i++)
    {
        RDuplication.insert(a[i]);
    }
    cout<<"Removing Duplicate Element of given array is:";
    for(int i:RDuplication)
    {
        cout<<" "<<i;
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
    RmveDuplication(num,a);
    //int RD=
    //cout<<"Removing Duplicate Element of given array is:"<< RD << endl;
    return 0;
}