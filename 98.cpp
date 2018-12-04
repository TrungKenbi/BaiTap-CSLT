#include<iostream>
#include<cmath>
using namespace std;

const int VoNghiem = 0, KhongXacDinh = -1;
int GiaiHePhuongTrinh(int a, int b, int c, int d, int e, int f, int &x, int &y)
{
	int D = a * e - d * b;
	int Dx = c * e - f * b;
	int Dy = a * f - d * c;

	int SoNghiem;
	if(D != 0)
	{
		x = Dx / D;
		y = Dy / D;
		cout<<"\nHe phuong trinh co 1 nghiem duy nhat:  va "<<x<<y;
		SoNghiem = 1;
	}
	else
	{
		if(Dx != 0 || Dy != 0)
		{
			cout<<"\nHe phuong trinh vo nghiem";
			SoNghiem = 0;
		}
		else if(Dx == Dy == 0)
		{
			cout<<"\nHe phuong trinh co vo so nghiem";
			SoNghiem = -1;
		}
	}
	return SoNghiem;
}
int main()
{
	int a, b, c, d, e, f, x, y;
	
	cout<<"\nNhap a: ";
	cin>>a;
	cout<<"\nNhap b: ";
	cin>>a;
	cout<<"\nNhap c: ";
	cin>>a;
	cout<<"\nNhap d: ";
	cin>>a;
	cout<<"\nNhap e: ";
	cin>>a;
	cout<<"\nNhap f: ";
	cin>>a;

	int SoNghiem = GiaiHePhuongTrinh(a, b, c, d, e, f, x, y);
	return 0;
}
