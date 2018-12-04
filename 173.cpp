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
void DemChuSo(int a[], int n, int b[])
{
	for (int i = 0; i < n; i++)
	{
		int themang = abs(a[i]);
		while (themang != 0)
		{
			int ChuSo = themang % 10;
			themang /= 10;
			b[ChuSo]++;
		}
	}
}
int TimChuSoXuatItNhat(int a[], int n, int b[])
{
    int ChuSoMin = abs(a[0] % 10);
    for (int i = 0; i < 10 ; i++)
    {
        if (b[i] != 0)
        {
            ChuSoMin = (b[ChuSoMin] < b[i]) ? ChuSoMin : i;
        }
    }
    return ChuSoMin;
 }
int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	xuat(a, n);
	int b[10] = {0};
	DemChuSo(a, n, b);
	for (int i = 0; i < 10; i++)
	{
		if (b[i] != 0)
		{
			cout<<"\nChu so xuat hien lan" <<b[i];

		}
	}
	int ChuSoMin = TimChuSoXuatItNhat(a, n, b);
        cout<<"\nChu so xuat hien it nhat la: "<<ChuSoMin;
	return 0;
}
