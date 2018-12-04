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
		cin>>a[i];
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
int main()
{
	int n;
	int a[1000];

	int ViTriXoa;
	nhap(a, n);
	xuat(a, n);

	do{
		cout<<"\nNhap vi tri xoa: ";
		cin>>ViTriXoa;

		if(ViTriXoa < 0 || ViTriXoa >= n)
		{
			cout<<"\nVi tri khong hop le. Xin kiem tra lai!";
		}
	}while(ViTriXoa < 0 || ViTriXoa >= n);

	Xoa1PhanTu(a, n, ViTriXoa);
	cout<<"\nMang sau khi xoa phan tu tai vi tri: "<< ViTriXoa;
	xuat(a, n);
	return 0;
}
