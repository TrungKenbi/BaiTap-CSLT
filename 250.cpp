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
int KiemTraCapSoCong(int a[], int n, int &d)
{
	d = a[1] - a[0];
	int flag = 1;
	for(int i = 2; i < n - 1; i++)
	{
		if((a[i + 1] - a[i]) != d)
		{
			flag = 0;
			break;
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
	int flag = KiemTraCapSoCong(a, n, d);
	if(flag == 1)
	{
		cout<<"\nCac phan tu trong mang lap thanh cap so cong voi cong sai d = "<< d;
	}
	else
	{
	cout<<"\nKhong thoa DK";
	}
	return 0;
}
