#include<iostream>
#include<cmath>
using namespace std;

void nhap (int a[], int &n)
{
	do
	{
		cout<<"\nNhap so phan tu: ";
		scanf("%d", &n);
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
int KiemTraDang5K(int n)
{
	if (n <= 1)
      return 1;
	while(n > 1)  
    {
        if(n % 5 != 0) 
            return 0;
        n /= 5;
    }
    return 1;
}
int TimGiaTri5kLonNhat(int a[], int n)
{
	int max;
	int dem = 0;
	for(int i = 0; i < n; i++)
   {
       if (KiemTraDang5K(a[i]) == 1)
       {
           max = a[i];
           dem ++;
           break;
       }
   }
   if (dem == 0)
       return 0;
   for(int i = 0; i < n; i++)
       if (KiemTraDang5K(a[i]) == 1)
          max = (max > a[i]) ? max : a[i] ;
   return max;
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int KetQua = TimGiaTri5kLonNhat(a, n);
	cout<<"\nGia tri 5k lon nhat la: "<< KetQua;
	return 0;
}
