#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, n;
	float x, S, T;
	long M, N;
	cout<<"\nNhap x: ";
	cin>>x;
	do
	{
	cout<<"\nNhap n(n >= 1) : ";
	cin>>n;
	  if(n < 1)
	  {
		  cout<<"\n N phai >= 1. Xin nhap lai !";
	  }

	}while(n < 1);

	S = 1;
	N = 1;
	i = 1;

	while(i <= n)
	{
		
		T = pow(x, (2 * i + 1));
		M = i * 2 + 1;
		N = N * M * (M - 1);
		S = S + pow(-1, (float)(i + 1)) * T/N ;
		i++;
	}
	cout<<"\nTong la: "<< S;
	return 0;
}
