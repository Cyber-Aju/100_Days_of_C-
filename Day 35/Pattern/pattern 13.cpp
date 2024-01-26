#include <iostream>
using namespace std;

int pattern(int n)
{
	//int x[n][n];
	int a=1;
	int b=(n*2)-1;
	for(int i=1; i<=n; ++i)
	{
		int val=i;
		for(int j=1; j<=n; ++j)
		{
			if(j%2!=0)
			{
				cout<<val<<" ";
				val +=b;
			}
			else
			{
				cout<<val<<" ";
				val+=a;
				}	
		}
			a+=2;
				b-=2;
				cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	pattern(n);
	return 0;
}
