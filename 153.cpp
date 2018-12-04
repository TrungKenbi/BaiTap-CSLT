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
int TimViTriChanDau(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			return i;
		}
	}
	return -1;
}
int TimChanNhoNhat(int a[], int n, int ViTriChanDau)
{
	int ChanMin = a[ViTriChanDau];
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && a[i] < ChanMin)
		{
			a[i] = ChanMin;
		}
	}
	return ChanMin;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int ViTriChanDau = TimViTriChanDau(a, n);
	if(ViTriChanDau == -1)
	{
		cout<<"\nMang khong co so chan";
	}
	else
	{
		int ChanMin = TimChanNhoNhat(a, n, ViTriChanDau);
		cout<<"\nGia tri chan be nhat la: "<< ChanMin;
	}
	return 0;
}

