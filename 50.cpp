#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	int SoNghichDao = 0;
	do
	{
		cout<<"\nNhap n: ";
		cin>>n;
	}while(n < 0 && cout<<"\nLoi: (n >= 0)");

	cout<<"\nSo dao nguoc cua %d la: "<< n;
	do
	{
		cout<<"\t"<<n % 10;
	}while(n /= 10);
	return 0;
}
