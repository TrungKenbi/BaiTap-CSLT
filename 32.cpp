#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;

	   if(n <= 0)
		   cout<<"\nn phai > 0. Xin nhap lai !";
	}while(n <= 0);
	if (sqrt((float)n) == (int)sqrt((float)n))
	{
		cout<<"\nLa so chinh phuong"<< n;
	}
	else
	{
		cout<<"\nKhong la so chinh phuong"<< n;
	}
	return 0;
}
