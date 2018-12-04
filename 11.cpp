#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	long S, P;
	S = 0;
	P = 1;
	i = 1;
	do
	{
		cout<<"Nhap n: ";
		cin>>n;
		if(n < 1)
		{
			cout<<"\nN phai lon hon hoac bang 1. Xin nhap lai !";
		}
	}while(n < 1);

	while(i <= n)
	{
		P = P * i;
		S = S + P;
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
