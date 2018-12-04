#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int thang;
	cout<<"\nNhap thang: ";
	cin>>thang;
	switch (thang)
	{
	case 1:
	case 2:
	case 3:
		cout<<"\nQui mot";
		break;
	case 4:
	case 5:
	case 6:
		cout<<"\nQui hai";
		break;
	case 7:
	case 8:
	case 9:
		cout<<"\nQui ba";
		break;
	case 10:
	case 11:
	case 12:
		cout<<"\nQui bon";
		break;
	}
	return 0;

}
