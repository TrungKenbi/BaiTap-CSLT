#include<iostream>
#include<cmath>
#define eps 1e-4 
using namespace std;

int main()
{
	float S, T, x, LuyThua, GiaiThua;
	int i, Dau = -1;

	cout<<"\nNhap x(radian): ";
	cin>>x;

	GiaiThua = 1;
	S = T = LuyThua = x;
	for(i = 3; T > eps; i += 2, Dau = -Dau)
	{
		T = (LuyThua *= x * x) / (GiaiThua *= i * (i - 1));
		S += Dau * T;
	}
	cout<<"\nCong thuc Taylor: sin (%.2f) = %.4f"<< x<< S;
	cout<<"\nSin () cua math.h: sin(%.2f) = %.4f"<< x<< sin(x);
	return 0;
}
