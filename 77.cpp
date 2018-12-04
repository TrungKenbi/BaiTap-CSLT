#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	long s;
	cout<<"\Nhap n: ";
	cin>>n;

	s = 0;
	i = 1;
	while(i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	cout<<"\t"<< s;
	return 0;
}
