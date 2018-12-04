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
		cout<<"\nNhap a[%d]: "<<i;
		cin>>a[i];
	}
}

void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<< a[i];
	}
}

float duongdautien(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
         if (a[i]>0)
         {
             return a[i];
         }
    }
    return -1;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	float duongdau = duongdautien(a, n);
	cout<<"\nGia tri duong dau tien la: "<<duongdau;
	return 0;
}
