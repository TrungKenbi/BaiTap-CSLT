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
		cout<<"Nhap a["<<i<<"]: "<< i;
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
void Xoa1PhanTu(int a[], int &n, int ViTriXoa)
{
	for(int i = ViTriXoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void XoaCacSoChan(int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			Xoa1PhanTu(a, n, i);
			i--;
		}
	}
}
int main()
{
	int n;
	int a[1000];
	int ViTriXoa;
	nhap(a, n);
	xuat(a, n);
	XoaCacSoChan(a, n);
	cout<<"\nMang sau khi xoa tat cac cac gia tri chan: ";
	xuat(a, n);
	return 0;
}
