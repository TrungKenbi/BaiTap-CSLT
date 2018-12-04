#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, j, n;

	cout<<"\nNhap n: ";
	cin>>n;

	// Câu a:
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n + i - 1; ++j)
		{
			printf((j < n - i + 1) ? " " : "%c", 234);
		}
		putchar('\n');
	}
	// Câu b:
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n + i - 1; ++j)
		{
			printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
		}
		putchar('\n');
	}
	cout<<"\n";
	// Câu c: 
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n; ++j)
		{
			printf((j <= i) ? "%c" : " ", 234);
		}
		cout<<"\n\n";
	}
	// Câu d
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n; ++j)
		{
			printf((j == i || j == 1 || i == n) ? "*" : " ");
		}
		cout<<"\n";
	}
	return 0;
}

