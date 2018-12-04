#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b;

	do{
		cout<<"Nhap vao so nguyen duong a = ";
		cin>>a;
		if (a < 0)
		{
			cout<<"\nGia tri nhap vao khong hop le. Xin kiem tra lai !";
		}
	} while (a < 0);

	do{
		cout<<"\nNhap vao so nguyen duong b = ";
		cin>>b;
		if (b < 0)
		{
			cout<<"\nGia tri nhap vao khong hop le. Xin kiem tra lai !";
		}
	} while (b < 0);

	int Max = a > b ? a : b;
	int Min = a < b ? a : b;
	
	if (Max % Min == 0)
	{
		cout<<"\nUSCLN =  "<<Min;
	}
	else
	{
		for (int i = Min / 2; i >= 1; i--)
		{
			if (Min % i == 0 && Max % i == 0)
			{
				cout<<"\nUSCLN = "<< i;
				break;
			}
		}
	}
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
	}
	cout<<"\nUSCLN = "<<a;
	return 0;
}
