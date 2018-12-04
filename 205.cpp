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
int TinhTongCacPhanTuLonHonTriTuyetDoiCuaPhanTuDungLienSauNo(int a[], int n)
{
	int Tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > abs(a[i + 1]))
		{
			Tong += a[i];
		}
	}
	return Tong;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int tong = TinhTongCacPhanTuLonHonTriTuyetDoiCuaPhanTuDungLienSauNo(a, n);
	cout<<"\nTong bang= "<< tong;
	return 0;
}
