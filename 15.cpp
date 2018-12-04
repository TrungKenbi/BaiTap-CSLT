#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float S, T;
    i = 1;
	S = 0;
	T = 0;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	  if(n < 1)
	   {
		cout<<"\nN phai >= 1. Xin Nhap lai!";
	   }
	}while(n < 1);

	while(i <= n)
	{
		T = T + i;
		S = S + 1.0 / T;
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
