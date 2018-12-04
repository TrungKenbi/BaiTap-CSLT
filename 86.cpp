#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n, S;
	cout<<"\nNhap n: ";
	cin>>n;
	S = 0;
	i = 1;
	while(i <= n)
	{
		S = S + i * i * i;
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}

