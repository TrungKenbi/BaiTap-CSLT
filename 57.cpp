#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	do
	{
		cout<<"Nhap n(n >= 0): ";
		cin>>n;
		if(n < 0)
		{
			cout<<"\nN phai >= 0. Xin nhap lai !"; 
		}
	}while(n < 0);
	cout<<"\nSo so nguyen duong n co toan cac chu so chan hay khong ?\n"<<n;
	bool Check = true;
	while(n /= 10)
	{
		if((n % 10) % 2 == 1)
		{
			Check = false;
		    break;
		}
	}
	if(Check == true)
	{
		cout<<"Dung !";
	}
	else
	{
		cout<<"Sai";
	}
	return 0;
}
