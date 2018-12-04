#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int S, i, n;
	S = 0;
	i = 1;
	cout<<"\nNhap n: ";
	cin>>n;
	for(;;)
	{
		S = S + i;
		i = i + 2;
		if(i >= n)
			break;
	}
	cout<<"\nTong = "<<S;
	return 0;
}
