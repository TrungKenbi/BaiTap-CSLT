#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int themang, n;
	int S;

	do
	{
	cout<<"\nNhap n: ";
	scanf("%d", &n);
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	S = 0;
	themang = n;

	while(themang != 0)
	{
		S = S + themang % 10;
		themang = themang / 10;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}

