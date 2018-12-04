#include<iostream>
#include<cmath>
using namespace std;

void KiemTraTamGiac(int a, int b, int c)
{
	if(a + b <= c || a + c <= b ||  b + c <= a)
	{
		cout<<"\nTam giac khong hop le. Xin kiem tra lai !";
	}
	else
	{
		cout<<"\nDay la tam giac: ";
	    if((a == b) && (b == c))
		{
			printf("Deu");
		}
		else
		{
			if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
			{
				cout<<"Vuong";
			}
			if(a == b || a == c || b == c)
		    {
			    cout<<"Can";
		    }
			else
			{
				cout<<"Thuong";
			}
		}
	}
}

int main()
{
	int a, b, c;
	cout<<"\nNhap canh a: ";
	cin>>a;

	cout<<"\nNhap canh b: ";
	cin>>b;

	cout<<"\nNhap canh c: ";
	cin>>c;
	 KiemTraTamGiac(a, b, c);
	return 0;
}
