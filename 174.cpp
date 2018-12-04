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
		cout<<"\nNhap a["<<i<<"]: "<<i;
		cin>>a[i];
	}
}
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"\t"<< a[i];
	}
}
void LietKe(float a[], int n)
{
	int i, j;
	cout<<"\nCac cap gia tri (a, b) thoa DK a <= b , khac nhau tung doi mot: ";
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j] || a[i] == a[j])
			{
				cout<<"\nCap <"<<i<<", "<<j<<" > vi tri <a["<<i<<"],a["<<j<<"]>"<< a[i]<< a[j]<< i<< j;
			}
		}
	}    
}
int main()
{
	int n;
	float a[1000];
	nhap(a, n);
	xuat(a, n);
	LietKe(a, n);
	return 0;
}

