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
int KiemTraBiTrung(int a[], int n, int ViTri)
{
	for (int i = ViTri - 1; i >= 0; i--)
	{
		if (a[i] == a[ViTri])
		{
			return 0; 
		}
	}
	return 1;        
}
int DemSoLuongPhanTuTrung(int a[], int n, int ViTri)
{
	int dem = 1;
	for (int i = ViTri + 1; i < n; i++)
	{
		if (a[i] == a[ViTri])
		{
			dem++;
		}
	}
	return dem;
}
void LietKeCacGiaTriXuatHienDung1Lan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung == 1)
		{
			int dem = DemSoLuongPhanTuTrung(a, n, i);
			if(dem == 1)
			{
				cout<<"\nCac phan tu xuat hien dung 1 lan la "<< a[i];
			}
		}
	}
}
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	LietKeCacGiaTriXuatHienDung1Lan(a, n);
	return 0;
}
