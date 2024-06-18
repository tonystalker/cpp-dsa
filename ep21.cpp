#include <bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,string> p;
	p=make_pair(1,"abc");
	//p={1,"abc"};
	pair<int,string> &p1=p;
	p1.first=2;

	cout<<p.first<<" "<<p.second<<endl;

	pair<int,int> p_array[3];
	p_array[0]={1,2};
	p_array[1]={3,4};
	p_array[2]={5,6};
	swap(p_array[0],p_array[2]);

	for (int i = 0; i < 3; ++i)
	{
		/* code */cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}


}