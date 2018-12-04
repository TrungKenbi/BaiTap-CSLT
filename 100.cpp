#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c;

	cout<<"\nNhap vao a = ";
	cin>>a;

	cout<<"\nNhap vao b = ";
	cin>>b;

	cout<<"\nNhap vao c = ";
	cin>>c;

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout<<"\nPhuong trinh co vo so nghiem";
			}
			else
			{
				cout<<"\nPhuong trinh vo nghiem";
			}
		}
		else
		{
			float x = -c / b;
			cout<<"\nPhuong trinh co nghiem duy nhat x = "<<x;
		}
	}
	else
	{
		float Denta = b * b - 4 * a * c;
		if (Denta < 0)
		{
			cout<<"\nPhuong trinh vo nghiem";
		}
		else if (Denta == 0)
		{
			float x = -b / (2 * a);

			cout<<"\nPhuong trinh co nghiem kep x1 = x2 = "<<x;
		}
		else
		{
			float x1 = (-b + sqrt(Denta)) / (2 * a);
			float x2 = (-b - sqrt(Denta)) / (2 * a);
			cout<<"\nPhuong trinh co 2 nghiem phan biet:\nx1 = \nx2 = "<< x1<<x2;
		}
	}
	return 0;
}
