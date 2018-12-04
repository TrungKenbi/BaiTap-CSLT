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
double TinhKgCachTBGiuaCacGiaTriTrongMang(int a[], int n)
{
	int Tong = 0;
	int y = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			Tong += abs(a[i] - a[i + 1]);
			y++;
		}
	}
	return pow(Tong, 1.0/y);
}
int main()
{
	int n;
	int a[1000];
	int x;
	nhap(a, n);
	xuat(a, n);
	float KgCach = TinhKgCachTBGiuaCacGiaTriTrongMang(a, n);
	cout<<"\nKhoang cach TB giua cac gia tri trong mang = "<< KgCach;
	return 0;
}
