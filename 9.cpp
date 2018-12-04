#include<iostream>
using namespace std;

int main()
{
	int i, n;
	long P;
	i = 1;
	P = 1;
	do
	{
		cout<<"\nNhap n: ";
		cin>>n;
		if(n < 1)
		{
			cout<<"\nN phai lon hon hoac bang 1. Xin nhap lai !";
		}
	}while(n < 1);

	while(i < n)
	{
		P = P * i;
		i++;
	}
	cout<<"\nTich 1x2x....xn la: "<<P;
	return 0;
}
