#include<iostream>
#include<cmath>
using namespace std;

char hoten [30];
int toan;
int van;
float DiemTrungBinh;

void Nhap()
{
	fflush(stdin);
	cout<<"\nNhap ho ten: ";
	gets(hoten);

	cout<<"\nNhap toan: ";
	cin>>toan;

	cout<<"\nNhap van: ";
	cin>>van;
}
void XuLy()
{
	DiemTrungBinh = (toan + van) / 2.0;
}

void Xuat()
{
	cout<<"\nHo ten: "<<hoten;
	cout<<"\nToan: "<<toan;
	cout<<"\nVan: "<<van;
	cout<<"\nDiem Trung Binh: "<<DiemTrungBinh;
}
int main()
{
	Nhap();
	XuLy();
	Xuat();
	return 0;
}
