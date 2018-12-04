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
int KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
float TinhTBCongNguyenTo(int a[], int n)
{
	int Tong = 0;
	float dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(KiemTraNguyenTo(a[i]) == 1)
		{
			Tong += a[i];
			dem++;
		}
	}
	if(dem == 0)
	{
		cout<<"\nMang khong co so nguyen to";
		return 0;
	}
	return Tong/dem;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	float TBC = TinhTBCongNguyenTo(a, n);
	cout<<"\nTrung binh cong cac so nguyen to = "<< TBC;
	return 0;
}
