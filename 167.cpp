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
int KiemTraToanLe(int n)
{
	int dv;
	while (n != 0)
	{
		dv = n % 10;
		if (dv % 2 == 0) 
			return 0;
		n = n / 10;
	}
	return 1;
}
int TimSoToanChuSoLeMax(int a[], int n)
{
	int max;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(KiemTraToanLe(a[i]) == 1)
		{
			max = a[i]; 
			dem++; 
			break;    
		}
	}
	if(dem == 0)
	{
		return 0;
	}
	for(int i = 0; i < n; i++)
	{
		if (KiemTraToanLe(a[i]) == 1)
		{
			max = ( max > a[i]) ? max : a[i] ;
		}
	}
	return max;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int Kq = TimSoToanChuSoLeMax(a, n);
	cout<<"\nKet qua la: "<<Kq;
	return 0;
}

