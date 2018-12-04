#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b;
	cout<<"\nNhap a: ";
	cin>>a;

	cout<<"\nNhap a: ";
	cin>>a;

	cout<<"\nUCLN cua a va b la: "<<a<<b;
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
	}
	cout<<"\t"<<a;
	return 0;
}
