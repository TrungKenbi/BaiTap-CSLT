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
		cout<<"\t"<<a[i];
	}
}
void LietKe(float a[], int n)
{
	int flag = 0;
	for(int i = 0; i < n - 1; i++)
	{
		if((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0))
		{
			flag = 1;
			cout<<"\t"<< a[i];
		}
	}
	if (flag == 0)
        cout<<"Mang ko co gia tri do";
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	cout<<"\nCac so trong mang thoa dieu kien\n ";
	LietKe(a, n);
	return 0;
}
