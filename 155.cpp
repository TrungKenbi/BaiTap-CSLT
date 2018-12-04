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
void TaoMang(float a[], int n, float b[], int x)
{
	for(int i = 0; i < n; i++)
	{
		b[i] = abs(x - a[i]);
	}
}
float TimMax(float b[], int n)
{
	int Max = b[0];
	for (int i = 1; i < n; i++)
	{
		if (b[i] > Max)
		{
			Max = b[i];
		}
	}
	return Max;
}
void XuatKetQua(float a[], float b[], int n)
{
	cout<<"\nGia tri trong mang xa gia tri x nhat la: ";
	int Max = TimMax(b, n);
	for (int i = 0; i < n; i++)
	{
		if (b[i] == Max)    
		{
			cout<<"\t"<< a[i];
		}
	}
}
int main()
{
	int n;
	float a[1000];
	float b[1000];
	nhap(a, n);
	xuat(a, n);
	float x;
	cout<<"\nNhap vao gia tri x: ";
	cin>>x;
	TaoMang(a, n, b, x);
	cout<<"\nKhoang cach tu x =  den cac phan tu trong mang la: \n"<< x;
	xuat(b, n);
	XuatKetQua(a, b, n);
	return 0;
}
