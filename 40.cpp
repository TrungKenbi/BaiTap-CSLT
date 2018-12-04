#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float x, T, S;
	i = 1;
	T = 1;
	S = 0;
	do
	{
	cout<<"\nNhap x(x >= 0): ";
	cin>>n;
	  if(x < 0)
	  {
		  cout<<"\nx khong hop le. Xin nhap lai !";
	  }
	}while(x < 0);
	do
	{
	cout<<"\nNhap n(n >= 1): ";
	cin>>n;
	if(n < 1)
	  {
		  cout<<"\nn khong hop le. Xin nhap lai !";
	  }
	}while(n < 1);
	while(i <= n)
	{
		T = T * x;
		S = sqrt(T + S);
		i++;
	}
	cout<<"\nTong la: "<< S;
	return 0;
}
