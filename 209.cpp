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
int KiemTraDoiXung(int n)
{
	int donvi, tam = n;
	int sodaonguoc = 0;
	while(tam != 0)
	{
		donvi = tam % 10;
		sodaonguoc = sodaonguoc * 10 + donvi;
		tam /= 10;
	}
	if(sodaonguoc == n)
	{
		return 1;
	}
	return 0;
}
int TongCacSoDoiXung(int a[], int n)
{
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(KiemTraDoiXung(a[i]) == 1)
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
	int tong = TongCacSoDoiXung(a, n);
	cout<<"\nTong cac so doi xung = "<< tong;
	return 0;
}
