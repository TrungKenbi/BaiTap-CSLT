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
int KiemTraMangANamTrongMangB(int a[], int b[], int n, int m)
{
	int flag = 0;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i] == b[j])
			{
				dem++;
			}
		}
	}
	if(dem == n)
	{
		flag = 1;	
	}
	return flag;
}
int main()
{
	int n, m;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int b[1000];
	nhap(b, m);
	xuat(b, m);
	int flag = KiemTraMangANamTrongMangB(a, b, n, m);
	if(flag == 1)
	{
		cout<<"\nTat ca cac phan tu trong mang A deu nam trong mang B";
	}
	else
	{
	cout<<"\nKhong thoa DK";
	}
	return 0;
}
