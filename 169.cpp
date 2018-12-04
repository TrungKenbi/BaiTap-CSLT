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
		cout<<a[i];
	}
}
void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<< a[i];
	}
}
int TimViTriLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			return i;
		}
	}
	return -1;
}
int TimSoLeNhoNhat(int a[], int n, int ViTriDauTien)
{
	int MinLe = a[ViTriDauTien];

	for (int i = ViTriDauTien + 1; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] < MinLe)
		{
			MinLe = a[i];
		}
	}
	return MinLe;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int ViTriLeDauTien = TimViTriLeDauTien(a, n);
	if (ViTriLeDauTien == -1)
	{
		cout<<"\nMang khong ton tai so le";
	}
	else
	{
		int MinLe = TimSoLeNhoNhat(a, n, ViTriLeDauTien);
		int SoChanThoa = MinLe - 1;
		cout<<"\nSo chan lon nhat nho hon toan bo gia tri le trong mang la "<< SoChanThoa;
	}
	return 0;
}
