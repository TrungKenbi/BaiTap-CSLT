#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x, S, T;
	int i, n;
	S = 0;
	T = 1;
	i = 1;
	
	cout<<"\nNhap x: ";
	cin>>x;
	
	x = -x;
	do
	{
	cout<<"Nhap n: ";
	cin>>n;
	if(n < 1)
	{
		cout<<"\nDu lieu khong hop le. Xin kiem tra lai !";
	}
	}while(n < 1);
	while(i <= n)
	{
		T = T * x;
		S = S + T;
		i++;
	}
	cout<<"\nTong = "<<S;
	return 0;
}
