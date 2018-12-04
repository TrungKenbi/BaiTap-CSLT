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
int KiemTraDang2K(int n)
{
	if (n <= 1)
      return 1;
	while(n > 1)  
    {
        if(n % 2 != 0)   
            return 0;
        n /= 2;
    }
    return 1;
}
int TimGiaTri2KDauTien(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(KiemTraDang2K(a[i]) == 1)
		{
			return a[i];
		}
	}
	return 0;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int KetQua = TimGiaTri2KDauTien(a, n);
	cout<<"\nGia tri 2k dau tien la: "<< KetQua;
	return 0;
}


