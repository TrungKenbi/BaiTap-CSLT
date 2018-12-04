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
	if(duongnhonhat == -1)
		return -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0 && a[i] < duongnhonhat)
		{
			duongnhonhat = a[i];
		}
	}
	return duongnhonhat;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	float duongnhonhat = timgiatriduongnhonhat(a, n);
	cout<<"\nGia tri duong nho nhat la: "<< duongnhonhat;
	return 0;
}
