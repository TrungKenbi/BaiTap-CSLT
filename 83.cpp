#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b;
	cout<<"\nNhap a: ";
	cin>>a;	
	cout<<"\nNhap b: ";
	cin>>b;

	if(a * b > 0)
		cout<<"\ncung dau"<<a<<b;
	else
		cout<<"\nkhong cung dau"<<a<<b;
	return 0;
}
