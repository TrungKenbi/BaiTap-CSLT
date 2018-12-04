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
int DemSoLanXuatHienCuaMangATrongMangB(int a[], int b[], int na, int nb)
{
	int i, j, Start, flag, dem = 0;
	for(i = 0; i < nb; i++)      
	{
		if(a[0] == b[i] && nb - i >= na)  
		{                                  
			Start = i;           
			flag = 1;
			for(j = 0; j < na; j++)
			{
				if(a[j] != b[Start++])
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
	int dem = DemSoLanXuatHienCuaMangATrongMangB(a, b, na, nb);
	cout<<"\nSo lan xuat hien cua mang a trong mang b = "<<dem;
	return 0;
}
