#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	int count;
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
    count = 0;
	cout<<"\nCac uoc so chan cua so nguyen duong n la: "<<n;
	while(i <= n)
	{
		if(n % i == 0)
		{
			if(i % 2 == 0)
			{
			cout<<"\t"<<i;
			count++;
			}
		}
			i++;
	}
	cout<<"\nSo luong uoc so chan cua %d la: %ld" <<count;
	return 0;
}
