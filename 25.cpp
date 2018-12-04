#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int i, n;
	long S;
	do
	{
	cout<<"Nhap n(n > 0): ";
	cin>>n;
	  if(n <= 0)
	   {
		cout<<"\n N phai > 0. Xin nhap lai !";
	   }
	}while(n <= 0);
    i = 1;
    S = 0;
	cout<<"\nCac uoc so chan cua so %d la: "<<n;
	while(i <= n)
	{
		if(n % i == 0)
		{
			if(i % 2 == 0)
			{
			cout<<"\t"<< i;
			S = S + i;
			}
		}
			i++;
	}
	cout<<"\nTong cac uoc so chan cua %d la: %ld"<< S;
	return 0;
}
