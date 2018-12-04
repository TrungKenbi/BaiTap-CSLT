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

void LietKeSoToanChuSoLe(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(KiemTraToanLe(a[i]) == 1)
		{
			cout<<"\t"<< a[i];
		}
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	cout<<"\nCac so toan chu so le la: ";
	LietKeSoToanChuSoLe(a, n);
	return 0;
}
