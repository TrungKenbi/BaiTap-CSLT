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
void LietKe(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
    {
        if (a[i] > abs(a[i - 1]) && a[i] < abs(a[i + 1]))  
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
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	cout<<"\nCac so trong mang thoa dieu kien\n ";
	LietKe(a, n);
	return 0;
}
