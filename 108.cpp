#include<iostream>
#include<cmath>
using namespace std;

double Power_n(double x, long n)
{
	double result = 1;
	while(n--)
	{
		result = result * x;
	}
	return result;
}
double qPower_n(double x, long n)
{
	double result = 1;
	while(n)
	{
		if(n % 2 == 1)
		{
			result = result * x;
		}
		x = x * x;
		n = n / 2;
	}
	return result;
}
int main()
{
	double x = 4;
	long n = 2;
	double z;
	z = qPower_n(x, n);
	cout<<"z = "<<z;
	return 0;
}

