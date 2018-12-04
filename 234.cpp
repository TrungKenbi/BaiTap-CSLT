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

int DemPhanTuChiXuatHien1Trong2Mang(int a[], int b[], int na, int nb)
{
	int flag, dem = 0;
	for(int i = 0; i < na; i++)
	{
		flag = 1;
		for(int j = 0; j < nb; j++)
		{
			if(a[i] == b[j])
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
	for(int i = 0; i < nb; i++)
	{
		flag = 1;
		for(int j = 0; j < na; j++)
		{
			if(b[j] == a[i])
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
	int na, nb;
	int a[1000], b[1000];
	cout<<"\nNhap mang a:";
	nhap(a, na);
	xuat(a, na);
	cout<<"\nNhap mang b:";
	nhap(b, nb);
	xuat(b, nb);
	int dem = DemPhanTuChiXuatHien1Trong2Mang(a, b, na, nb);
	cout<<"\nSo phan tu chi xuat hien 1 trong 2 mang la: "<< dem;
	return 0;
}
