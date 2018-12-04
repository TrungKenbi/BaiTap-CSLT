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
int timvitrithoaDK(int a[], int n)
{
	int i = 1;
	for(; i < n - 1; i++)
	{
		if(a[i] == a[i - 1] * a[i + 1])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	int a[1000];
	int x, y;
	nhap(a, n);
	xuat(a, n);
	int vitri = timvitrithoaDK(a, n);
	cout<<"\nVi tri thoa dieu kien: co gia tri lan can\n va gia tri tai do = tich 2 gia tri lan can: "<< vitri;
	return 0;
}
