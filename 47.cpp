#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long themang, n;
	int sochuso;
	float S = 0;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	sochuso = 0;
	themang = n;

	while(themang != 0)
	{
		if(themang % 2 == 0)
		{
		S = S + themang % 10;
		}
		themang = themang / 10;
	}
	cout<<"\nTong cac chu so chan cua so nguyen duong n la: "<<S;
	return 0;
}
