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

int timvitrinhonhat(float a[], int n)
{
	int vtnn = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < a[vtnn])
		{
			vtnn = i;
		}
	}
	return vtnn;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);

	int vtnn = timvitrinhonhat(a, n);

	cout<<"\nVi tri chua phan tu nho nhat la: "<< vtnn;
	return 0;
}

