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
		cout<<"Nhap a["<<i<<"]: "<<i;
		cin>>a[i];
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t", a[i];
	}
}
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXep(int a[], int n)
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
void Tron2MangTangThanh1MangGiam(int a[], int b[], int c[], int na, int nb, int &nc)
{
	nc = na + nb;       
	SapXep(a, na);       
	SapXep(b, nb);       
	int vitriA = na - 1, vitriB = nb - 1;   
	for(int i = 0; i < nc; i++)       
	{
		if(vitriA >= 0 && vitriB >= 0)    
		{
			if(a[vitriA] > b[vitriB])     
			{
				c[i] = a[vitriA--];        
			}
			else
			{
				c[i] = b[vitriB--];           
			}
		}
		else if(vitriB < 0)          
		{
			c[i] = a[vitriA--];          
		}
		else
		{
			c[i] = b[vitriB--];
		}
	}
}
int main()
{
	int na, nb, nc;
	int a[1000], b[1000], c[1000];
	nhap(a, na);
	xuat(a, na);
	nhap(b, nb);
	xuat(b, nb);
	Tron2MangTangThanh1MangGiam(a, b, c, na, nb, nc);
	cout<<"\nMang sau khi tron 2 mang : ";
	xuat(c, nc);
	return 0;
}
