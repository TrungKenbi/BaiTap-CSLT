#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float x, S, T;
	long M;
	cout<<"Nhap x: ";
	cin>>x;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	  if(n < 1)
	  {
		  cout<<"\n N phai >= 1. Xin nhap lai !";
	  }
	}while(n < 1);
	S = 0;
	T = 1;
	M = 1;
	i = 1;
	while(i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + T/M;
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
