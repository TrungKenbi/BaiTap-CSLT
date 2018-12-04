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
int DemSoLuongCacGiaTriPhanBiet(int a[], int n)
{
	int dem = 0, flag;
	for(int i = 0; i < n; i++)
	{
		flag = 1;
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int dem = DemSoLuongCacGiaTriPhanBiet(a, n);
	cout<<"\nSo luong cac gia tri phan biet trong mang = "<< dem;
	return 0;
}
