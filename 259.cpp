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
		cout<<"Nhap a["<<i<<"]: "<<i;
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
int KiemTraHoanThien(int n)
{
	int tong = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			tong += i;
		}
	}
	if(tong == n)
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXepHoanThienGiamDan(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(KiemTraHoanThien(a[i]) == 1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(KiemTraHoanThien(a[j]) == 1 && a[i] < a[j])
				{
					HoanVi(a[i], a[j]);
				}
			}

		}
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	SapXepHoanThienGiamDan(a, n);
	cout<<"\nMang sau khi sap xep hoan thien giam dan: ";
	xuat(a, n);
	return 0;
}
