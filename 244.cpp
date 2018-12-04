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
int KiemTraMangKhongCoSoHoanThienLonHon256(int a[], int n)
{
	int flag = 0; // lúc d?u chua có
	for(int i = 0; i < n; i++)
	{
		if(KiemTraHoanThien(a[i]) == 1 && a[i] < 256)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int flag = KiemTraMangKhongCoSoHoanThienLonHon256(a, n);
	if(flag == 1)
	{
		cout<<"\nMang khong co so hoan thien lon hon 256";
	}
	else
	{
		cout<<"\nKhong tim thay";
	}
	return 0;
}
