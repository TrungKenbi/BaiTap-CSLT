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
float TinhTBNhanCacSoDuong(int a[], int n)
{
	int Tich = 1;
	float dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			Tich *= a[i];
			dem++;
		}
	}
	if(dem == 0)
	{
		cout<<"\nMang khong co so thoa yeu cau";
		return 0;
	}
	return pow(Tich,1.0/dem);
}
int main()
{
	int n;
	int a[1000];
	int x;
	nhap(a, n);
	xuat(a, n);
	float TBN = TinhTBNhanCacSoDuong(a, n);
	cout<<"\nTrung binh cong cac so duong = "<< TBN;
	return 0;
}
