#include<iostream>
#include<cmath>
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<"\nNhap vao phan tu a["<<i<<"] = "<<i;
		cin>>a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
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
void DemTanSuatXuatHien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung == 1)
		{
			int dem = DemSoLuongPhanTuTrung(a, n, i);
			cout<<"\nPhan tu xuat hien: "<< a[i]<< dem;
		}
	}
}
int main()
{
	int n;
	do
	{
		cout<<"\nNhap vao so luong phan tu cua mang: ";
		cin>>n;
		if (n < 0 || n > 1000)
		{
			cout<<"\nSo luong phan tu nhap vao khong hop le. Xin kiem tra lai !";
		}
	} while (n < 0 || n > 1000);
	int a[1000];
	NhapMang(a, n);
	XuatMang(a, n);
	DemTanSuatXuatHien(a, n);
	return 0;
}
