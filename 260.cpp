#include<iostream>
#include<cmath>
using namespace std;

void nhap (int a[], int &n)
{
	do
	{
		cout<<"Nhap so phan tu: ";
		cin>>n;
		if(n <= 0 || n > 1000)
		{
			cout<<"\nSo phan tu khong hop le. Xin kiem tra lai !";
		}
	}while(n <= 0 || n > 1000);
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"]: "<<i;
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
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXepTangDan(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}
void KiemTraBCoPhaiLaHoanViCuaA(int a[],int b[], int na, int nb)
{
	if(na != nb)
	{
		cout<<"\nKhong phai";     
		return;
	}
	SapXepTangDan(a, na);        
	SapXepTangDan(b, nb);        
	for(int i = 0; i < na; i++)
	{
		if(a[i] != b[i])              
		{
			cout<<"\nKhong phai";
			return;
		}
	}
	cout<<"\nPhai";
	return;
}
int main()
{
	int na, nb;
	int a[1000], b[1000];

	nhap(a, na);
	xuat(a, na);

	nhap(b, nb);
	xuat(b, nb);
	KiemTraBCoPhaiLaHoanViCuaA(a, b, na, nb);
	return 0;
}
