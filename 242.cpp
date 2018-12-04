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
		cout<<"Nhap a["<<i<<"]: "<< i;
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
int KiemTraCoSoChan(int a[], int n)
{
	int flag = 0; 
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int flag = KiemTraCoSoChan(a, n);
	if(flag == 1)
	{
		cout<<"\nMang co so chan";
	}
	else
	{
	cout<<"\nKhong tim thay";
	}
	return 0;
}

