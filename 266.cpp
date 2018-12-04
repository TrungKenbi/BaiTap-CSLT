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
void Them1PhanTu(int a[], int &n, int ViTriThem, int PhanTuThem)
{
	for(int i = n; i > ViTriThem; i--)
	{
		a[i] = a[i - 1];
	}
	a[ViTriThem] = PhanTuThem;
	n++;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int ViTriThem, PhanTuThem;
	do
	{
		cout<<"\nNhap vao vi tri can them "<<0<<n;
		cin>>ViTriThem;
		if (ViTriThem < 0 || ViTriThem > n)
		{
			cout<<"\nVi tri khong hop le. Xin kiem tra lai !";
		}
	} while (ViTriThem < 0 || ViTriThem > n);
	cout<<"\nNhap vao phan tu can them: ";
	cin>>PhanTuThem;
	Them1PhanTu(a, n, ViTriThem, PhanTuThem);
	cout<<"\nMang sau khi them: \n";
	xuat(a, n);
	return 0;
}
