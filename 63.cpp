#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, i;
	do{
		cout<<"\nNhap vao so nguyen duong a = ";
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
	if(a == b)
		return a;
	else
	{
		for(i = Max; i < a * b; i++)
			if(i % a == 0 && i % b == 0)
			{
				return i;
				break;
			}
	}
	cout<<"\nBCNN la: "<<i;
	return 0;
}
