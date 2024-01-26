#include <iostream>
using namespace std;

int pattern(int n)
{
	int a=1;
	int b=(n*2)-1;
	for(int i=n;i>=1;--i)
	{
		int val=i;
		for(int j=1; j<=n; ++j)
		{
			if(j%2!=0)
			{
				cout<<val<<" ";
				val+=a;
			}
			else
			{
				cout<<val<<" ";
				val+=b;
			}
		}
		cout<<endl;
		a+=2;
		b-=2;
	}
}

int main()
{
	int n;
	cin>>n;
	pattern(n);
	return 0;
}

