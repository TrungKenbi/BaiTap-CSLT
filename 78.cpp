#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	cout<<"\nNhap n: ";
	cin>>n;
	i = 1;
	while(i <= n)
	{
		if(n % i == 0)
			cout<<"\t"<<i;
		i = i + 1;
	}
	return 0;
}
