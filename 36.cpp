#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float S, M;
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
    M = 1;
	S = sqrt((float)0);

	while(i <= n)
	{
		M = M * i;
		S = sqrt(M + S);
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
