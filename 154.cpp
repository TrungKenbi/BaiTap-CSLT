#include<iostream>
#include<cmath>
using namespace std;

void nhap (float a[], int &n)
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
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<<a[i];
	}
}
int timvitriamdau(float a[], int n)
{
	int vitri = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			vitri = i;
			break;
		}
	}
	return vitri;
}
float vitriamlonnhat(float  a[], int n, int vitriamdau)
{
	for (int i = vitriamdau + 1; i < n; i++)
	{
		if (a[i] < 0 && a[i] > a[vitriamdau])
		{
			vitriamdau = i;
		}
	}
	return vitriamdau;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	int vitriamdau = timvitriamdau(a, n);
	if(vitriamdau == -1)
	{
		cout<<"\nMang khong co so am";
	}
	else
	{
		int vitri = vitriamlonnhat(a, n, vitriamdau);
		cout<<"\nVi tri phan tu am lon nhat trong mang: "<<vitri;
	}
	return 0;
}
