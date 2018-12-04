#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int themang, n, i;
	do
	{
		cout<<"\nNhap n: ";
		cin>>n;
	}while(n < 0 && cout<<"\nLoi: (n >= 0)");
	themang = n;
	do
	{
	  i = themang % 10;
	}while(themang /= 10);
	cout<<"\nChu so dau tien la: "<<i;
	return 0;
}
