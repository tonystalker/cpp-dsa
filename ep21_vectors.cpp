#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x);/* code */
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
		/* code */
	}
	v.pop_back();
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
		/* code */
	}

	cout<<endl;
}