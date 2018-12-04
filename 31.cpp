#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, n;
	cout<<"Nhap n: ";
	cin>>n;

	if(n < 2)
		cout<<"\nkhong phai la so nguyen to"<< n;
	else if(n == 2)
		cout<<"\nla so nguyen to"<<n;
	else if(n % 2 == 0)
		cout<<"\nkhong phai la so nguyen to"<<n;
	else
	{
		for(i = 3; i <= n; i+=2)
		{
			if(n % i == 0)
				break;
		}
		if(i == n)
			cout<<"\nla so nguyen to"<<n;
		else
			cout<<"\nkhong phai la so nguyen to"<<n;
	}
		
	return 0;
}
