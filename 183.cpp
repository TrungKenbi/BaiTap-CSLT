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
float TimMax(float a[], int n)
{
	float max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
void LietKeViTriLonNhat(float a[], int n)
{
	float max = TimMax(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] == max)
		{
			cout<<"\t"<< i;
		}
	}
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	cout<<"\nVi tri ma gia tri tai do lon nhat la: ";
	LietKeViTriLonNhat(a, n);
	return 0;
}

