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
int DemPhanTuLonHonHayNhoHonPhanTuXungQuanh(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(i == 0 && a[i] != a[i + 1])   
		{
			dem++;
		}
		else if(i == n - 1 && a[i - 1] != a[i]) 
		{
			dem++;
		}
		else if((a[i - 1] > a[i] && a[i] < a[i + 1]) || (a[i - 1] < a[i] && a[i] > a[i + 1]))
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
	int dem = DemPhanTuLonHonHayNhoHonPhanTuXungQuanh(a, n);
	cout<<"\nSo luong phan tu lon hon hoac nho hon phan tu xung quanh: "<< dem;
	return 0;
}
