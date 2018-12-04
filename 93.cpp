#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N, d;
	cout<<"\nNhap N: ";
	cin>>N;;
	if(N < 2)
		cout<<"\nkhong phai la so nguyen to"<<N;
	else
		if(N == 2)
			cout<<"\nla so nguyen to"<<N;
		else
			if(N % 2 == 0)
				cout<<"\nkhong phai la so nguyen to"<<N;
			else
			{
				d = 3;
				while(d <= N)
				{
                    if(N % d == 0)
						break;
					d = d + 2;
				}
				if(d == N)
					cout<<"\nla so nguyen to"<<N;
				else
					cout<<"\nkhong phai la so nguyen to"<<N;
			}
	return 0;
}
