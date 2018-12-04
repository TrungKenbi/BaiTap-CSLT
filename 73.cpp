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
	cout<<"\nNhap n(n >= 0) : ";
	cin>>n;
	  if(n < 0)
	  {
		  cout<<"\n N phai >= 0. Xin nhap lai !";
	  }

	}while(n < 0);

	S = 1;
	N = 1;
	i = 1;

	while(i <= n)
	{
		T = pow(x, (2 * i ));
		M = i * 2;
		N = N * M * (M - 1);
		S = S + pow(-1, (float)i) * T / N;
		i++;
	}
	cout<<"\nTong la "<< -S;
	return 0;
}
