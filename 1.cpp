#include<iostream>
using namespace std;

int main()
{
	int i, n;
	long S;
	S = 0;
	i = 1;
	cout<<"\nNhap n: ";
	cin>>n;

	while(i<=n)
	{
		S = S + i;
		i++;
	}
	cout<<"\nTong 1 + 2 + ... + n: "<<S;
	return 0;
}
