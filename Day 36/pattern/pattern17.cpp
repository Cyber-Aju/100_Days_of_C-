#include <iostream>
using namespace std;

int pattern(int n)
{
	int a=1;
	for(int i=1; i<=n; ++i)
	{
		int b=a;
		for(int j=1; j<=n; ++j)
		{
			cout<<a<<" ";
			a=a+2;
		}
		a=b+2;
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

