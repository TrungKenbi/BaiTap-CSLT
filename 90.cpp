#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N, m, S;
	cout<<"Nhap N: ";
	cin>>N;

	S = 0;
	m = 0;
	do
	{
		m = m + 1;
		S = S + m;
	}while(S + m + 1 < N);
	cout<<"\nSo nguyen duong m la: "<< m;
	return 0;
}
