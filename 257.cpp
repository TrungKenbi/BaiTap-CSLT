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
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXepLeTangDan(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(a[i] % 2 != 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] % 2 != 0 && a[i] > a[j])
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
	SapXepLeTangDan(a, n);
	cout<<"\nMang sau khi sap xep le tang dan: ";
	xuat(a, n);
	return 0;
}
