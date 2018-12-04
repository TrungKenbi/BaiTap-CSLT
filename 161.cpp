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
		cout<<"\nNhap a["<<i<<"]: "<<i;
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
int dautientrongdoan(int a[], int n, int x, int y)
{
	int dem = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] >= x && a[i] <= y)
		{
			dem++;
			break;
		}
	}
	if(dem == 0)
	{
		return x;
	}
	return a[i];
}
int main()
{
	int n;
	int a[1000];
	int x, y;
	cout<<"\nNhap x: ";
	cin>>x;
	cout<<"\nNhap y: ";
	cin>>y;
	nhap(a, n);
	xuat(a, n);
	int ketqua = dautientrongdoan(a, n, x, y);
	cout<<"\nGia tri dau tien nam trong doan la: "<<ketqua;
	return 0;
}
