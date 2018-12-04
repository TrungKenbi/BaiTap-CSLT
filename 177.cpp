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
		cout<<"\nNhap a["<<i<<"]: "<< i;
		cin>>a[i];
	}
}
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<<a[i];
	}
}
void LietKeTrongDoanXY(float a[], int n, float x, float y)
{
	for(int i = 0; i < n; i++)
	{
		if(x <= a[i] && a[i] <= y)
		{
			cout<<"\t"<< a[i];
		}
	}
}
int main()
{
	int n;
	float a[1000];
	float x, y;
	cout<<"\nNhap x: ";
	cin>>x;
	cout<<"\nNhap y: ";
	cin>>y;
	nhap(a, n);
	xuat(a, n);
	cout<<"\nCac so trong mang thuoc la: ";
	LietKeTrongDoanXY(a, n, x, y);
	return 0;
}
