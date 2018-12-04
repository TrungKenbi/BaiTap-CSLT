#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long themang, n;
	int sochuso;
	int P = 1;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	sochuso = 0;
	themang = n;

	while(themang != 0)
	{
		if(themang % 2 == 1)
		{
		 P = P * (themang % 10);
		}
		themang = themang / 10;
	}
	cout<<"\nTich cac chu so le cua so nguyen duong n la: "<< P;
	return 0;
}
