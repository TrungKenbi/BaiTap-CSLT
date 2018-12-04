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
int TimSoHangChuc5(int n)
{
	n = abs(n);
	n = n / 10;
	int hangchuc = n % 10;
	if(hangchuc == 5)
	{
		return 1;
	}
	return 0;
}
int TinhTongSoHangChuc5(int a[], int n)
{
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(TimSoHangChuc5(a[i]) == 1)
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
	int TongChuc5 = TinhTongSoHangChuc5(a, n);
	cout<<"\nTong cac phan tu co chu so hang chuc la 5: "<< TongChuc5;
	return 0;
}

