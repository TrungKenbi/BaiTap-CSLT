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
int timvitriduongnhonhat(float a[], int n)
{
	int i;
    int min;
    int dem = 0 ;
    for (i = 0; i < n; i++)
    {
        if(a[i] > 0)  
        {
            dem++;      
            min = i;     
            break;    
        }
    }  
    if (dem == 0)     
        return -1;
    for (i = i + 1; i < n; i++)
    {
        if((a[i] > 0) && (a[i] < a[min]))
        {
           min = i;
        }
    }
    return min;
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	int vitriduongnhonhat = timvitriduongnhonhat(a, n);
	cout<<"\nVi tri gia tri duong nho nhat la: "<<vitriduongnhonhat;
	return 0;
}

