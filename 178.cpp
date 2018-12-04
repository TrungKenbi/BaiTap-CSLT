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
void LietKeChanTrongDoanXY(int a[], int n, int x, int y)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && x <= a[i] && a[i] <= y)
		{
			cout<<"\t"<< a[i];
		}
	}
}
int main()
{
	int n;
	int a[1000];
	int x, y;
	cout<<"\nNhap x: ";
	cin>>x;
	cout<<"\nNhap y: ";
	cin>>y;
	nhap(a, n);
	xuat(a, n);
	cout<<"\nCac so chan trong mang thuoc la: ";
	LietKeChanTrongDoanXY(a, n, x, y);
	return 0;
}
