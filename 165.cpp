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
	}while(n <= 0 || n >1000);
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
int ChuSoDau( int n)
{
	int dv;
   while (n >= 10)  
   {
       dv = n % 10;
       n = n / 10;
   }
   if (n % 2 == 0)
       return 0;
   return 1;
}
int TimChuSoDauLe(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
       if (ChuSoDau(a[i]) == 1)
	   {
           return a[i];
	   }
	}
   return 0;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int LeDau = TimChuSoDauLe(a, n);
	cout<<"\nKet qua la: "<< LeDau;
	return 0;
}


