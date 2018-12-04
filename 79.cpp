#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long n, t;
	int dem;
	cout<<"\nNhap n: ";
	cin>>n;
	dem = 0;
	t = n;
	while(t != 0)
	{
		dem++;
		t /= 10;
	}
	cout<<"\t"<<dem;
	return 0;
}
