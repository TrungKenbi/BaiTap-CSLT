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
void LietKeViTriNguyenTo(int a[], int n)
{
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		if(KiemTraNguyenTo(a[i]) == true)
		{
			flag = 1;
			cout<<"\t"<< i;
		}
	}
	if(flag == 0)
	{
		cout<<"\nKhong co so nguyen to";
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	cout<<"\nVi tri cac so nguyen to la: ";
	LietKeViTriNguyenTo(a, n);
	return 0;
}
