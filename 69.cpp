#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, n;
	float x, T, S;
	i = 0;
	T = 1;
	S = 0;
	cout<<"\nNhap x: ";
	cin>>n;
	cout<<"\nNhap n: ";
	cin>>n;
	while(i < n)
	{
		T = pow(x, (2 * i + 1)) * pow(-1, (float)i);
		S = S + T;
		i++;
	}
	cout<<"\nTong la: "<<S;
	return 0;
}
