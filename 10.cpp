#include<iostream>
using namespace std;

double qPower_n(double x, long n);
double Power_n(double x, long n);

int main()
{
	double x = 3;
	long n = 2;
	double z;
	z = qPower_n(x, n);
	cout<<"z = "<<z;
	return 0;
}
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

