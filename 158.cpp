#include<iostream>
#include<cmath>
using namespace std;

void nhap (float a[], int &n)
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
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<< a[i];
	}
}
float timx(float a[], int n)
{
	float x = a[0];
	for(int i = 1; i < n; i++)
	{
		 x = (x > (fabs)(a[i])) ?  x  :  (fabs)(a[i]);
	}
	 return x;
}
int main()
{
	int n;
	float a[1000];
	float b[1000];
	nhap(a, n);
	xuat(a, n);
	float x = timx(a, n);
	cout<<"\nGia tri thoa dieu kien doan chua tat ca cac gia tri trong mang"<<x;
	return 0;
}

