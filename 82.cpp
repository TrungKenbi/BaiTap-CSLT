#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c, max;
	cout<<"\nNhap a: ";
	cin>>a;

	cout<<"\nNhap b: ";
	cin>>b;

	cout<<"\nNhap c: ";
	cin>>c;

	max = a;
	if(max < b)
		max = b;
	if(max < c)
		max = c;
	cout<<"\nSo lon nhat trong 3 so a,b,c la: "<< a<< b<< c<< max;
	return 0;
}
