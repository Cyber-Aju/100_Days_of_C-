#include <iostream>
using namespace std;

int pattern(int n)
{
	int val=1;
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			if(i==j)
			{
				cout<<val<<" ";
				val++;
			}
		}
		cout<<endl;
	}
}

int main()
{
	int a=5;
	pattern(a);
}

