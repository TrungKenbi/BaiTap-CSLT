#include<iostream>
#include<cmath>
using namespace std;

void nhap (float a[], int &n)
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
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<<a[i];
	}
}
float TinhTongCacPhanTuDuong(float a[], int n)
{
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			Tong += a[i];
		}
	}
	return Tong;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	float tongDuong = TinhTongCacPhanTuDuong(a, n);
	cout<<"\nTong cac phan tu duong trong mang la: "<< tongDuong;
	return 0;
}

