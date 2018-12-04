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
int KiemTraBangNhau(int a[], int n)
{
	int flag = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}
int main()
{
	int n, d;
	int a[1000];
	nhap(a, n);
	xuat(a, n);

	int flag = KiemTraBangNhau(a, n);
	if(flag == 1)
	{
		cout<<"\nCac phan tu trong mang bang nhau";
	}
	else
	{
	cout<<"\nKhong thoa DK";
	}
	return 0;
}

