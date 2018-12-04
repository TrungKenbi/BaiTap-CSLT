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
		cout<<"\t"<< a[i];
	}
}

float tongam(float a[], int n)
{
	float s = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			s = s + a[i];
		}
	}
	return s;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	float tong = tongam(a, n);
	cout<<"\nTong cac so am trong mang la "<< tong;
	return 0;
}
