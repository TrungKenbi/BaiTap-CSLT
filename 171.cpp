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
int TimSoNhoNhat(int a[], int n)
{
	int min = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];  
		}
	}
	return min;
}
bool KiemTraUocSoChung(int a[], int n, int UocSo)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % UocSo != 0)
		{
			return false;
		}
	}
	return true;
}
int TimUocSoLonNhatCuaMang(int a[], int n)
{
	for(int UocSo = TimSoNhoNhat(a, n); UocSo >= 1; UocSo--)  
	{
		if(KiemTraUocSoChung(a, n, UocSo) == true)
		{
			return UocSo;
		}
	}
	return 1;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int Kq = TimUocSoLonNhatCuaMang(a, n);
	cout<<"\nUoc So chung lon nhat cua mang la: "<< Kq;
	return 0;
}
