#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, j, m, n;

	cout<<"\nNhap m: ";
	cin>>m;
	// Câu a
	cout<<"\nNhap n: ";
	cin>>n;

	for(i = 1; i <= m; ++i)
	{
		for(j = 1; j <= n; ++j) 
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	cout<<"\n" ;

	for(i = 1; i <= m; ++i)
	{
		for(j = 1; j <= n; ++j) 
		{
			if( i == 1 || i == m || j == 1 || j == n )
			{
				cout<<"*";
				if(j == n)
				cout<<"\n";
			}
			else
				cout<<" "; 
		}
	}
	return 0;
}

