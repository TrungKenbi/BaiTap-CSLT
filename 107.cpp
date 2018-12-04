#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double S;
   float x, n;

	cout<<"\nNhap x: ";
	cin>>x;

	cout<<"\nNhap n: ";
	cin>>n;
	n = 1/ n;
	S = pow(x, n);
	cout<<"Can bac %.2f cua %.2f la %.2f"<<1/n<< x<< S;
	return 0;
}
