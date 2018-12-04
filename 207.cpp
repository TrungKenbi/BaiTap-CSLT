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
int TinhTongCacPhanTuCucTri(int a[], int n)
{
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(i == 0 && a[i] != a[i + 1])  
		{
			Tong += a[i];
		}
		else if(i == n - 1 && a[i] != a[i - 1])
		{
			Tong += a[i];
		}
		else if((a[i] < a[i + 1] && a[i] < a[i - 1]) || (a[i] > a[i + 1] && a[i] > a[i - 1]))
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
	int Tong = TinhTongCacPhanTuCucTri(a, n);
	cout<<"\nTong = "<< Tong;
	return 0;
}
