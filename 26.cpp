#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	long P;
	do
	{
	cout<<"\nNhap n(n > 0): ";
	cin>>n;
	  if(n <= 0)
	   {
		cout<<"\n N phai > 0. Xin nhap lai !";
	   }
	}while(n <= 0);
    i = 1;
    P = 1;
	cout<<"\nCac uoc so le cua so %d la: "<<n;
	while(i <= n)
	{
		if(n % i == 0)
		{
			if(i % 2 == 1)
			{
			cout<<"\t"<< i;
			P = P * i;
			}
		}
			i++;
	}
	cout<<"\nTich cac uoc so le cua so nguyen duong n la: "<<P;
	return 0;
}
