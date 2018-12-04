#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int S = 0;
	int n = 0;
	while(S < 10000)
	{
		n++;
		S = S + n;
	}
	cout<<"\nTong la "<<S;
	cout<<"\nSo n la "<<n;
	return 0;
}
