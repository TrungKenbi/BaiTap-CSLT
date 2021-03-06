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
		cout<<"\nNhap a["<<i<<"]: "<<i;
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
bool KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int TimSoNguyenToCuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(KiemTraNguyenTo(a[i]) == true)
		{
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int nguyentocuoi = TimSoNguyenToCuoi(a, n);
	cout<<"\nSo nguyen to cuoi cung la: "<< nguyentocuoi;
	return 0;
}
