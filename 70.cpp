#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float S, P;
	S = 0;
	P = 0;
	i = 1;
	do
	{
		cout<<"\nNhap n: ";
		cin>>n;
		if(n < 1)
		{
			cout<<"\nN phai lon hon hoac bang 1. Xin nhap lai !";
		}
	}while(n < 1);

	while(i <= n)
	{
		P = P + i;
		S = S + 1 * pow(-1, (float)(1 + i))/ P;
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
