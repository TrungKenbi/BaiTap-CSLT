#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, j, k;
    for (i = 0; i <= 200; ++i)
        for (j = 0; j <= 100; ++j)
            for (k = 0; k <= 40; ++k)
                if (i * 1000 + j * 2000 + k * 5000 == 200000)
                    cout<<"\n to 1000(VND) -   to 2000(VND) -  to 5000(VND) "<<i<<j<<k;
   
	return 0;
}
