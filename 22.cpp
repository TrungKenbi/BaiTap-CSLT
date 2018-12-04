#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int i, n;
	long P;
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
	P = 1;
	while(i <= n)
	{
		if(n % i == 0)
		{
		   cout<<"\t"<< i;
		   P = P * i;
		}
			i++;
	}
	cout<<"\nTich cac uoc cua so nguyen duong n la: "<< P;
	return 0;
}
