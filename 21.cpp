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
	while(i <= n)
	{
		if(n % i == 0)
		{
			cout<<"\t"<< i;
		   S = S + i;
		}
			i++;
	}
	cout<<"\nTong cac uoc cua so nguyen duong n la: "<<S;
	return 0;
}
