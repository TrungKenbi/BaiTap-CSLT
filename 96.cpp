#include<iostream>
#include<cmath>
using namespace std;

float Tinh(float x)
{
	float ketqua;
	if(x >= 5)
		ketqua = 2 * x * x + 5 * x + 9;
	else
		ketqua = -2 * x * x + 4 * x - 9;
	return ketqua;
}
int main()
{
	float x;
	cout<<"\nNhap x: ";
	cin>>x;
	float ketqua = Tinh(x);
	cout<<"\nKet qua = "<<ketqua;
	return 0;
}
