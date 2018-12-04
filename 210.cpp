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
		cout<<"\t"<<a[i];
	}
}
int KiemTraChuSoDauChan(int n)
{
	while(n >= 10)
	{
		n /= 10;
	}
	if(n % 2 == 0)
	{
		return 1;
	}
	return 0;
}
int TinhTongCacSoChuSoDauChan(int a[], int n)
{
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(KiemTraChuSoDauChan(a[i]) == 1)
		{
			Tong += a[i];
		}
	}
	return Tong;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int tong = TinhTongCacSoChuSoDauChan(a, n);
	cout<<"\nTong cac so co chu so dau chan = "<< tong;
	return 0;
}
