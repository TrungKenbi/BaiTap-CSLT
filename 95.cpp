#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c;
	cout<<"\nNhap vao a = ";
	cin>>a;

	cout<<"\nNhap vao b = ";
	cin>>b;

	cout<<"\nNhap vao c = ";
	cin>>c;
 
	if(a < 0)
	 a = -a;
	if(b < 0)
	 b = -b;
	if(c < 0)
	 c = -c;

	 cout<<"\na = "<< a;
	 cout<<"\nb = "<< b;
	 cout<<"\nc = "<< c;

	return 0;
}
