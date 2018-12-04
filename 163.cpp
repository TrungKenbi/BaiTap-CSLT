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
int KiemTraChinhPhuong(int n)
{
	if (sqrt((float)n) == (int)sqrt((float)n)) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int TimChinhPhuongDauTien(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(KiemTraChinhPhuong(a[i]) == 1)
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
	int x, y;
	nhap(a, n);
	xuat(a, n);
	int ketqua = TimChinhPhuongDauTien(a, n);
	cout<<"\nSo chinh phuong dau tien la: "<<ketqua;
	return 0;
}
