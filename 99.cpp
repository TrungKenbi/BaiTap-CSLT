#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c, temp;
	cout<<"\nNhap vao a = ";
	cin>>a;

	cout<<"\nNhap vao b = ";
	cin>>b;

	cout<<"\nNhap vao c = ";
	cin>>c;

	if(a > b) 
	{
		temp = a; a = b; b = temp;
	}
	if(a > c)
	{
		temp = a; a = c; c = temp;
	}
	if(b > c)
	{
		temp = b; b = c; c = temp;
	}
	cout<<"\nTang dan:  "<< a<< b<< c;
	return 0;
}


