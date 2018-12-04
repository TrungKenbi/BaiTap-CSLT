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

int TimSoLonNhat(int a[], int n)
{
	int max = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i]; 
		}
	}
	return max;
}
int TimBoiChungNhoNhat(int a[], int n)
{
	int BoiSo = TimSoLonNhat(a, n); 
	for(int i = 0; i < n; i++)
	{
		if(BoiSo % a[i] != 0)
		{
			BoiSo += TimSoLonNhat(a, n);
			i = -1;   
		} 
	}
	return BoiSo;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int Kq = TimBoiChungNhoNhat(a, n);
	cout<<"\nBoi chung nho nhat cua mang la: "<< Kq;
	return 0;
}
