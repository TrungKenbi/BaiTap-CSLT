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
int DemSoLanXuatHienCuaX(int a[], int n, int x)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	int n;
	int a[1000];
	int x;
	nhap(a, n);
	xuat(a, n);
	cout<<"\nNhap x: ";
	cin>>x;
	int SoLanX = DemSoLanXuatHienCuaX(a, n, x);
	cout<<"\nSo lan xuat hien cua x la: "<< SoLanX;
	return 0;
}
