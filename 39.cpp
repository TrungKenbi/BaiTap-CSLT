#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float S, M;
	do
	{
		cout<<"\nNhap n(n >= 1): ;
		cin>>n;

		if(n < 1)
		{
			cout<<"\nn phai >= 1. Xin nhap lai !";
		}
	}while(n < 1);
	i = 1;
	S = 0;
	M = 1;
	while(i <= n)
	{
		M = M * i;
		S = pow((M + S) * 1.0, 1.0/(i + 1));
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
