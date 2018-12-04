#include<iostream>
using namespace std;

int main()
{
	int i, n;
	float S;
	S = 0; i = 1;
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
		S = S + 1.0 / i;
		i++;
	}
	cout<<"i = "<< i;
	cout<<"\nS = "<< S;
	cout<<"\nTong 1 + 1/2 + ... + 1/2n la: "<<S;
	return 0;
}
