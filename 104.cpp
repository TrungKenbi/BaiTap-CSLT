#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int day, month, year, s, i;
	cout<<"\nNhap ngay, thang, nam: ";
	cin>>day>>month>>year;
	s = day;
	for(i = 1; i < month; i++)
	{
		switch (i)
		{
			case 4: case 6: case 9 : case 11: s+= 30; break;
			case 2: s += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
				break;
		default: s += 31;
		}
	}
	cout<<"\nNgay thu %d trong nam"<<s;
	return 0;
}
