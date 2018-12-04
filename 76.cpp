#include<iostream>
#include<cmath>
using namespace std;
 
int  check(int n);
int main()
{
    int i;
    int max = 10000;
 
    cout<<"cac so co dang 3^k:\n"<<max;
    for(i = 0; i < 10000; i++)
         check(i) ?   cout<<"\t"<< i : cout<<" ";      
    return 0;
}
int check(int n)
{
	int flag=1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;
	while(n > 1)
	{
		int du = n % 3;
		if(du != 0)
			flag = 0;
		n /= 3;
	}
	if(flag==1)
      return 1;
    else
      return 0;
}
