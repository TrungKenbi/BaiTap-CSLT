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
float TinhTBCongCacSoLonHonX(int a[], int n, int x)
{
	int Tong = 0;
	float dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > x)
		{
			Tong += a[i];
			dem++;
		}
	}
	if(dem == 0)
	{
		cout<<"\nMang khong co so thoa yeu cau";
		return 0;
	}
	return Tong/dem;
}
int main()
{
	int n;
	int a[1000];
	int x;
	nhap(a, n);
	xuat(a, n);
	cout<<"\nNhap x: ";
	cin>>x;
	float TBC = TinhTBCongCacSoLonHonX(a, n, x);
	cout<<"\nTrung binh cong cac so duong = "<<TBC;
	return 0;
}

