#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int So; 
	cout<<"Nhap vao so = ";
		cin>>So;
	if (So < 10 || So > 99)
	{
		cout<<"\nKhong hop le !";
		return 0;
	}
	else  
	{  
		int donvi = So % 10;
		int chuc = So / 10;

		if (chuc == 2)
		{
			cout<<"Hai";
		}
		else if (chuc == 3)
		{
			cout<<"Ba";
		}
		else if (chuc == 4)
		{
			cout<<"Bon";
		}
		else if (chuc == 5)
		{
			cout<<"Nam";
		}
		else if (chuc == 6)
		{
			cout<<"Sau";
		}
		else if (chuc == 7)
		{
			cout<<"Bay";
		}
		else if (chuc == 8)
		{
			cout<<"Tam";
		}
		else if (chuc == 9)
		{
			cout<<"Chin";
		}
		cout<<" Muoi ";

		if (donvi == 1)
		{
			cout<<"Mot";
		}
		else if (donvi == 2)
		{
			cout<<"Hai";
		}
		else if (donvi == 3)
		{
			cout<<"Ba";
		}
		else if (donvi == 4)
		{
			cout<<"Bon";
		}
		else if (donvi == 5)
		{
			cout<<"Nam";
		}
		else if (donvi == 6)
		{
			cout<<"Sau";
		}
		else if (donvi == 7)
		{
			cout<<"Bay";
		}
		else if (donvi == 8)
		{
			cout<<"Tam";
		}
		else if (donvi == 9)
		{
			cout<<"Chin";
		}
	}
	return 0;
}

