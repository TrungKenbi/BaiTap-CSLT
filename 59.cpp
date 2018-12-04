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

	int SoChuSo = (int)log10((float)n) + 1;
	int SoNghichDao = 0;
	int themang = n;

	cout<<"\nSo nguyen duong n co phai la so doi xung hay khong ?\n"<<n;
	while (themang != 0)
	{
		int ChuSo = themang % 10; 
		themang /= 10; 
		SoNghichDao += ChuSo * pow(10.0, --SoChuSo);
	}

	if(SoNghichDao == n)
	{
		cout<<"Dung !";
	}
	else
	{
		cout<<"Sai !";
	}
	return 0;
}
