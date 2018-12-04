#include<iostream>
#include<cmath>
using namespace std;

float tong(float, int);
float luythua(float, int);

float luythua(float x, int n)
{
	float t = 1;
	for(int i = 1; i <= n; i++)
	{
		t = t * x;
	}
	return t;
}

float tong(float x, int n)
{
	float s = 0;
	for(int i = 1; i <= n; i++)
	{
		s = s + luythua(x, i);
	}
	return s;
}

int main()
{
	int n;
	float x;
	cout<<"\nNhap n: ";
	cin>>n;
	cout<<"\nNhap x: ";
	cin>>x;
	float ketqua = tong(x, n);
	cout<<"\nTong: "<<ketqua;
	return 0;
}
