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
int TimChanDau(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			return a[i];
		}
	}
	return -1;
}
int TimChanLonNhat(int a[], int n)
{
	int ChanMax = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] % 2 == 0 && a[i] > ChanMax)
		{
			 ChanMax = a[i];
		}
	}
	return ChanMax;
}
void LietKeViTriChanLonNhat(int a[], int n)
{
	int ChanMax = TimChanLonNhat(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] == ChanMax)
		{
			cout<<"\t"<< i;
		}
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int ViTriChanDau = TimChanDau(a, n);
	if(ViTriChanDau == -1)
	{
		cout<<"\nMang khong co so chan";
	}
	else
	{
		cout<<"\nCac vi tri co gia tri bang gia tri chan lon nhat la";
		LietKeViTriChanLonNhat(a, n);
	}
	return 0;
}

