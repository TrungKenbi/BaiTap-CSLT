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
	i = 1;
	S = 0;
	while(i <= n)
	{
		S = sqrt(i + S);
		i++;
	}
	cout<<"\nTong S = %f"<<S;
	return 0;
}
