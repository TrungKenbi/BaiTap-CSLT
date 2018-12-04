#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int themang, n;
	int P;

	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	P = 1;
	themang = n;

	while(themang != 0)
	{
		P = P * (themang % 10);
		themang = themang / 10;
	}
	cout<<"\nTich la: "<<P;
	return 0;
}
