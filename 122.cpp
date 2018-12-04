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

float lonnhat(float a[], int n)
{
	float ln = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > ln)
		{
			ln = a[i];
		}
	}
	return ln;
}
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<<a[i];
	}
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	float ln = lonnhat(a, n);
	cout<<"\nPhan tu lon nhat trong mang la "<< ln;
	return 0;
}
