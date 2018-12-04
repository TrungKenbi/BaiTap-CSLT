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
int KiemTraDoiXung(int n)
{
	int dv = 0;
	int daonguoc = 0;
	int tam = n;
	while(tam > 0)
	{
		dv = tam % 10;
		tam /= 10;
		daonguoc = daonguoc * 10 + dv;
	}
	if(daonguoc == n)
	{
		return 1;
	}
	return 0;
}
int DemSoDoiXung(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			break;
		}
		if(KiemTraDoiXung(a[i]) == 1)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	int n;
	int a[1000];
	int x;
	nhap(a, n);
	xuat(a, n);
	int SoDoiXung = DemSoDoiXung(a, n);
	cout<<"\nSo luong so doi xung la: "<< SoDoiXung;
	return 0;
}

