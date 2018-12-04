#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	int max, dem;
	max = 0;
	dem = 1;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<"\nLoi: n >= 0 !");
	if(n == 0)
		dem = 1;

	do
	{
		i = n % 10;
	   if(i == max)
		   dem++;
	   if(i > max)
		   max = i;
	}while(n /= 10);
	cout<<"\nSo lon nhat la %d"<< max;
	cout<<"\nSo luong chu so lon nhat la: "<< dem;
	return 0;
}
