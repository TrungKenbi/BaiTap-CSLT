#include<iostream>
#include<cmath>
using namespace std;

bool KiemTraChinhPhuong(int n)
{
	return sqrt(float(n)) == (int)sqrt((float)n);
}

void LietKeChinhPhuong(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(KiemTraChinhPhuong(i) == true)
			cout<<"\t"<<i;
	}
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	LietKeChinhPhuong(n);
	return 0;
}
