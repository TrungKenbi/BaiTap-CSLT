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

int DemPhanTuLonNhatDungSau(int a[], int n)
{
	int dem = 0;
	for(int i = 1; i < n; i++)
	{
		int flag = 1;
		for(int j = 0; j < i; j++)
		{
			if(a[i] < a[j] || a[i] == a[j])
			{
				flag = 0;
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
	int dem = DemPhanTuLonNhatDungSau(a, n);
	cout<<"\nGia tri trong mang thoa: lon hon tat ca cac gia tri dang truoc no = "<< dem;
	return 0;
}


