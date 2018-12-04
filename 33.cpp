#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float S;
	do
	{
		cout<<"\nNhap n(n >= 1): ";
		cin>>n;
		if(n < 1)
		{
			cout<<"\nn phai >= 1. Xin nhap lai !";
		}
	}while(n < 1);
	S = sqrt((float)2);
	for(i = 2; i <= n; i++)
	{
		S = sqrt(2 + S);
	}
	cout<<"\nTong S = "<<S;
	return 0;
}
