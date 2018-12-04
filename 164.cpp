#include<iostream>
#include<cmath>
using namespace std;

void nhap (int a[], int &n)
{
	do
	{
		cout<<"\nNhap so phan tu: ";
		cin>>n;
		if(n <= 0 || n > 1000)
		{
			cout<<"\nSo phan tu khong hop le. Xin kiem tra lai !";
		}
	}while(n <= 0 || n > 1000);
	for(int i = 0; i < n; i++)
	{
		cout<<"\nNhap a["<<i<<"]: "<< i;
		cin>>a[i];
	}
}
void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<< a[i];
	}
}
int SoGanh(int x)
{
	int SoDao = 0;
	int themang = x;
	while (themang != 0)
	{
		SoDao = SoDao * 10 + themang % 10;
		themang /= 10;
	}
	if(x == SoDao)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int TimSoGanhDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (SoGanh(a[i]) == 1)
		{
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int GanhDau = TimSoGanhDauTien(a, n);
	cout<<"\nSo ganh dau tien la: "<< GanhDau;
	return 0;
}
