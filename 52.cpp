#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	int min;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	min = n % 10; 
	if(n == 0)
		min = 0;
	do
	{
		i = n % 10;
	   if(i < min)
	   {
		   min = i;
	   }
	}while(n /= 10);
	cout<<"\nChu so nho nhat la: "<<min;
	return 0;
}
