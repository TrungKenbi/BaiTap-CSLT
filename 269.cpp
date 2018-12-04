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
	for(int i = 0; i < n; i++)
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
void ChenXVaoMangTang(int a[], int &n, int x)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		if(x < a[i])
		{
			int temp = x;
			for(j = n; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[i] = temp;
			break;
		}
	}
	n++;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	SapXepTangDan(a, n);
	int PhanTuThem;
	cout<<"Nhap vao phan tu can them: ";
	cin>>PhanTuThem;
	ChenXVaoMangTang(a, n, PhanTuThem);
	cout<<"\nMang sau khi them: \n";
	xuat(a, n);
	return 0;
}
