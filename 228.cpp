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
int DemSoPhanTuKeNhauThoaDK(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] * a[i - 1] > 0 && abs(a[i - 1]) < abs(a[i]))
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
	nhap(a, n);
	xuat(a, n);
	int dem = DemSoPhanTuKeNhauThoaDK(a, n);
	cout<<"\nSo luong phan tu ke nhau ma so dung sau cung dau so dung truoc va co tri tuyet doi lon hon = "<< dem;
	return 0;
}
