#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n]; map<int, int> m;
	
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	
	vector<int> v;
	
	for(auto it = m.begin(); it != m.end(); it++)
	{
		v.push_back(it->first);
		cout<<it->first<<" ";
	}
	
	
	
	return 0;
}
