#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	float S;
	do
	{
		cout<<"\nNhap n(n >= 2): ";
		cin>>n;

		if(n < 2)
		{
			cout<<"\nn phai >= 2. Xin nhap lai !";
		}
	}while(n < 2);
	i = 3;
	S = pow(2.0, 1.0/2);
	while(i <= n)
	{
		S = pow((i + S) * 1.0, 1.0/i);
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
