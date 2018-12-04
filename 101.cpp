#include<iostream>
#include<cmath>
using namespace std;

const int minYear = 1900, maxYear = 10000;
int KiemTraNamNhuan(int nam)
{
		return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
void TimSoNgayTrongThang(int thang, int nam)
{
	switch(thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout<<"\nCo 31 ngay";
		break;
	case 4: case 6: case 9 : case 11:
		cout<<"\nCo 30 ngay";
		break;
	case 2:
		int Check = KiemTraNamNhuan(nam);
		if(Check == 1)
		{
			cout<<"\nCo 29 ngay !";
		}
		else
		{
			cout<<"\nCo 28 ngay !";
		}
	}
}

int main()
{
	int Thang, Nam;

	do
	{
		cout<<"\nNhap vao thang: ";
		cin>>Thang;
		if (Thang < 1 || Thang > 12)
			cout<<"\nDu lieu thang khong hop le. Xin kiem tra lai!";
	}while(Thang < 1 || Thang > 12);
	do
	{
		cout<<"\nNhap vao nam: ";
		cin>>Nam;
		if(Nam < minYear || Nam > maxYear)
		{
			cout<<"\nDu lieu nam khong hop le. Xin kiem tra lai!";
		}
	}while(Nam < minYear || Nam > maxYear);
	TimSoNgayTrongThang(Thang, Nam);
	return 0;
}
