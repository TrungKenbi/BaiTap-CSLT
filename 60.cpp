#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	do
	{
		cout<<"Nhap vao n ( n > 0 ): ";
		cin>>n;
		if (n <= 0)
		{
			cout<<"\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ";
		}
	} while (n <= 0);
	bool CheckTangDan = true;
	int themang = n;
	int ChuSoCuoi = themang % 10;
	themang /= 10;
	cout<<"\nCac chu so cua so nguyen duong n co tang dan tu trai sang phai khong ?\n "<<n;
	while(themang != 0)
	{
		int ChuSoKeCuoi = themang % 10;
		themang /= 10;
		if (ChuSoCuoi < ChuSoKeCuoi)
		{
			CheckTangDan = false;
			break;
		}
		else
		{
			ChuSoCuoi = ChuSoKeCuoi;
		}
	}
	if(CheckTangDan)
		cout<<"Dung !";
	else
		cout<<"Sai !";
	return 0;
}
