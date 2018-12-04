#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b;
	float x;
	cout<<"\nNhap a: ";
	cin>>a;	
	cout<<"\nNhap b: ";
	cin>>b;

	if(a == 0)
	{
		if(b == 0)
			cout<<"\nPT co vo so nghiem";
		else
			cout<<"\nPT vo nghiem";
	}
	else
	{
		x = -b / a;
	cout<<"\nPT co 1 nghiem la: "<<x;
	}
	return 0;

}
