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
bool kiemtrahoanthien(int n)
{
	int i = 1;
	int S = 0;
	while(i < n)
	{
		if(n % i == 0)
		{
			S = S + i;
		}
		i++;
	}
	if(S == n)
		return true;
	else
		return false;
}
int timsohoanthiencuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(kiemtrahoanthien(a[i]) == true)
		{
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int sohoanthiencuoi = timsohoanthiencuoi(a, n);
	cout<<"\nSo hoan thien cuoi la: "<< sohoanthiencuoi;
	return 0;
}
