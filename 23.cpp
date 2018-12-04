#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int i, n;
	int count;
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
	count = 0;
	while(i <= n)
	{
		if(n % i == 0)
		{
		   cout<<"%\t"<< i;
		   count++;
		}
			i++;
	}
	cout<<"\nSo luong cac uoc so cua so nguyen duong n la: "<<count;
	return 0;
}
