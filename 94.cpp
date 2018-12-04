#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i;
	for(i = 1; i < 100; i+=2)
	{
		if((i == 5) || (i == 7) || (i == 93))
			continue;
		cout<<"\t"<<i;
	}
	return 0;
}
