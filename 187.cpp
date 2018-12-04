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
float timduongdautien(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}
float timgiatriduongnhonhat(float a[], int n)
{
	float duongnhonhat = timduongdautien(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0 && a[i] < duongnhonhat)
		{
			duongnhonhat = a[i];
		}
	}
	return duongnhonhat;
}

void LietKeViTriBgGiaTriDuongMin(float a[], int n)
{
	float DuongMin = timgiatriduongnhonhat(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] == DuongMin)
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
	int vitriduongdau = timduongdautien(a, n);
	if(vitriduongdau == -1)
	{
		cout<<"\nMang khong co so duong";
	}
	else
	{
	cout<<"\nVi tri ma gia tri tai do bang gia tri duong nho nhat: ";
	LietKeViTriBgGiaTriDuongMin(a, n);
	}
	return 0;
}
