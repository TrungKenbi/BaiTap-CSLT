#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	int min, dem;
	dem = 0;
	do
	{
	cout<<"Nhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	min = n % 10; 
	if(n == 0)
		min = 0;

	do
	{
		i = n % 10;
		if(i == min)
			dem++;
	   if(i < min)
		   min = i;
	}while(n /= 10);
	cout<<"\nChu so nho nhat la %d"<<min;
	cout<<"\nSo luong chu so nho nhat la %d"<<dem;
	return 0;
}
