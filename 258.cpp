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
		cout<<"\nNhap a["<<i<<"]: "<<i;
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
int KiemTraNguyenTo(int n)
{
	if(n < 2)
	{
		return 0;
	}
	else if(n > 2)
	{
		if(n % 2 == 0)
		{
			return 0;
		}
		for(int i = 3; i <= sqrt((float)n); i+= 2)
		{
			if(n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXepNguyenToTangDan(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(KiemTraNguyenTo(a[i]) == 1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(KiemTraNguyenTo(a[j]) == 1 && a[i] > a[j])
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
	SapXepNguyenToTangDan(a, n);
	cout<<"\nMang sau khi sap xep nguyen to tang dan: ";
	xuat(a, n);
	return 0;
}
