#include<iostream>
using namespace std;

int main()
{
	int i, n;
	float S;
	S = 0;
	do
	{
		cout<<"\nNhap n: ";
		cin>>n;
		if(n < 1)
		{
			cout<<"\nN phai lon hon hoac bang 1. Xin nhap lai !";
		}
	}while(n < 1);

	for(i = 0; i < n; i++)
	{
		S = S + 1.0 / ((2 * i) + 1);
	}
	cout<<"\nTong la: "<< S;
	return 0;
}
