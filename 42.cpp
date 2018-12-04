#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int i, n;
	float S;
	i = 0;
	S = 0;
	do
	{
	cout<<"\nNhap n: ";
	cin>>n;
	}while(n < 0 && cout<<("Error: (n >= 0)\n"));
	while(S + i < n)
	{
		i++;        
		S = S + i;  
	}
		cout<<"\nGia tri k lon nhat de S(k) = 1 + 2 + ... + k < n la: "<< i;
	return 0;
}
