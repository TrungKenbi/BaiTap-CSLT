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
int DemSoLuongGiaTriLonNhat(int a[], int n)
{
	int dem = 0;
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(max == a[i])
		{
			dem++;
		}
		else if(a[i] > max)
		{
			max = a[i];
			dem = 1;
		}
	}
	return dem;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int dem = DemSoLuongGiaTriLonNhat(a, n);
	cout<<"\nSo luong gia tri lon nhat = "<< dem;
	return 0;
}
