#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int i, n, max;
	do
	{
	cout<<"\nNhap n(n > 0): ";
	cin>>n;
	  if(n <= 0)
	   {
		cout<<"\n N phai > 0. Xin nhap lai !";
	   }
	}while(n <= 0);
    i = 1;
	max = 1;
	cout<<"\nCac uoc so le cua so %d la: "<<n;
	while(i <= n)
	{
		if((n % i == 0) && (i % 2 == 1))
		{
			if(i > max)
			{
			max = i;
			}
			cout<<"\t"<<i;
		}
			i++;
	}
	cout<<"\nUoc so le lon nhat la: "<< max;
	return 0;
}
