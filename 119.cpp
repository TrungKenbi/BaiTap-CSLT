#include<iostream>
#include<cmath>
using namespace std;

bool KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
void LietKeNguyenTo(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(KiemTraNguyenTo(i) == true)
			cout<<"\t"<<i;
	}
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	LietKeNguyenTo(n);
	return 0;
}
