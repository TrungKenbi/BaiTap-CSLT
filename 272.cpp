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
		cout<<"Nhap a["<<i<<"]: "<<i;
		cin>>a[i];
	}
}
void Xoa1PhanTu(float a[], int &n, int ViTriXoa)
{
	for(int i = ViTriXoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

float TimMax(float a[], int n)
{
	float max = a[0];
	for(int i = 1; i < n; i++)
	{
		max = (max < a[i]) ? a[i] : max;
	}
	return max;
}

void XoaCacSoLonNhat(float a[], int &n)
{
	float max =TimMax(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] == max)
		{
			Xoa1PhanTu(a, n, i);
			i--;
		}
	}
}
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<<a[i];
	}
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	XoaCacSoLonNhat(a, n);
	cout<<"\nMang sau khi xoa cac gia tri lon nhat: ";
	xuat(a, n);
	return 0;
}
