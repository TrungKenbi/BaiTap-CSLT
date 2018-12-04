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
void LietKeTanSuatXuatHien(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int dem = 0;
		for(int j = 0; j < n; j++) 
		{
			if(a[i] == a[j])
			{
				if(i <= j)         
				{
					dem++;    
				}
				else
				{
					break;    
				}
			}
		}
		if(dem != 0)
		{
			cout<<"\nGia tri co tan suat xuat hien la: "<< dem;
		}
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	LietKeTanSuatXuatHien(a, n);
	return 0;
}

