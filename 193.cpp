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
int KiemTraDang3K(int n)
{
	int flag=1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;

	while(n > 1)
	{
		int du = n % 3;
		if(du != 0)  
			flag = 0;
		n /= 3;
	}
	if(flag == 1)
      return 1;
    else
      return 0;
}

void LietKeCacGiaTriCoDang3K(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(KiemTraDang3K(a[i]) == 1)
		{
			cout<<"\t"<< a[i];
		}
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	cout<<"\nCac gia tri co dang 3^k trong mang la: ";
	LietKeCacGiaTriCoDang3K(a, n);
	return 0;
}

