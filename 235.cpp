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
void LietKePhanTuXuatHien1Trong2Mang(int a[], int b[], int na, int nb)
{
	int i, j, flag;
	for(i = 0; i < na; i++)
	{
		flag = 1;
		for(j = 0; j < nb; j++)
		{
			if(a[i] == b[j])
			{
				flag = 0;
				cout<<"\nTrong mang A co phan tu a["<<i<<"] = "<<i<<" nam trong mang B\n"<< i<< a[i];
				break;
			}
		}
		if(flag == 1)
		cout<<"\t"<< a[i];
	}
	for(i = 0; i < nb; i++)
	{
		flag = 1;
		for(j = 0; j < na; j++)
		{
			if(b[i] == a[j])
			{
				flag = 0;
				cout<<"\nTrong mang B co phan tu a["<<i<<"] = "<<i<<" nam trong mang A\n"<< i<< b[i];
				break;
			}
		}
		if(flag == 1)
		cout<<"\t"<< b[i];
	}
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
	cout<<"\nCac phan tu xuat hien 1 trong 2 mang: ";
	LietKePhanTuXuatHien1Trong2Mang(a, b, na, nb);
	return 0;
}
