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
		cout<<"\t"<< a[i];
	}
}
void timdoan(float a[], int n)
{
	float max = a[0];
	float min = a[0];
	for(int i = 0; i < n; i++)
	{
		max = (a[i] > max) ? a[i] : max;
		min = (a[i] < min) ? a[i] : min;
	}
	 cout<<"\n[ "<<min<<" , "<<max<<" ] la doan chua cac gia tri trong mang\n"<< min<< max;
}
int main()
{
	int n;
	float a[1000];
	float b[1000];
	nhap(a, n);
	xuat(a, n);
	timdoan(a, n);
	return 0;
}
