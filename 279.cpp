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
		cout<<"Nhap a["<<i<<"]: "<< i;
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
void Xoa1PhanTu(int a[], int &n, int ViTriXoa)
{
	for(int i = ViTriXoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void XoaCacPhanTuXuatHienNhieuHon1Lan(int a[], int &n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa1PhanTu(a, n, j);
				j--;
				flag = 1;
			}
		}
		if(flag == 1)
		{
			Xoa1PhanTu(a, n, i);
		}
	}
}
int main()
{
	int n;
	int a[1000];
	int ViTriXoa;
	nhap(a, n);
	xuat(a, n);
	XoaCacPhanTuXuatHienNhieuHon1Lan(a, n);
	cout<<"\nMang sau khi xoa tat cac cac gia tri xuat hien nhieu hon 1 lan: ";
	xuat(a, n);
	return 0;
}
