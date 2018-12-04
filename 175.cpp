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
void LietKe(float a[], int n)
{
	int i, j;
	float khoangCachGanNhat = (abs)(a[0] - a[1]);
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n - 1; j++)
		{
			if((abs)(a[i] - a[j]) < khoangCachGanNhat)
			{
				khoangCachGanNhat = (abs)(a[i] - a[j]);
			}
		}
	}
	cout<<"\nNhung cap gia tri gan nhau nhat: \n";

	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n - 1; j++)
		{
			if((abs)(a[i] - a[j]) == khoangCachGanNhat)
			{
				cout<<"\n"<<i<<","<<j<<"> vi tri <a["<<i<<"],a["<<j<<"]>\n"<<a[i]<< a[j]<< i<< j;
			}
		}
	}
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	LietKe(a, n);
	return 0;
}
