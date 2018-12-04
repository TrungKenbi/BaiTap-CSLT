#include<iostream>
#include<cmath>
using namespace std;

long tong(int n)
{
	long s = 0;
	int i = 1;
	while(i <= n)
	{
		s = s + i;
		i++;
	}
	return s;
}
int main()
{
	int n;
	cout<<"\nNhap n: ";
	cin>>n;
	long ketqua = tong(n);
	cout<<"\nTong = "<<ketqua;
	return 0;
}
