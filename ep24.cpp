#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int, int>> v_p = {{2, 3}, {4, 5}, {6, 7}};
	for(pair<int,int> &value:v_p)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}
	//to write short decleration of iterator

	for(auto it=v_p.begin();it!=v_p.end();it++)
	{
		cout<<(it->first)<<" "<<(it->second)<<endl;
	}
}