#include<iostream>
using namespace std;

int main()
{
	int i, n;
	float S;
	S = 0;
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
		S = S + (float)i / (i + 1);
		i++;
	}
	cout<<"\nTong la "<< S;

	return 0;
}
