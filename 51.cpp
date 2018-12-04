#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	int max;
	max = 0;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	if(n == 0)
		max = 0;
	do
	{
		i = n % 10;
	   if(i > max)
	   {
		   max = i;
	   }
	}while(n /= 10);

	cout<<"\nChu so lon nhat la: "<< max;

	return 0;
}
