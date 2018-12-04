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
int KiemTraMangDoiXung(int a[], int n)
{
	int flag = 1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			flag = 0;
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
	int flag = KiemTraMangDoiXung(a, n);
	if(flag == 1)
	{
		cout<<"\nMang doi xung";
	}
	else
	{
		cout<<"\nKhong thoa DK";
	}
	return 0;
}
