#include <bits/stdc++.h>
using namespace std;
int main()
{
  	map <int,string> m;
  	m[1]="a";
  	m[2]="  b";
  	m[4]="c";
  	for(auto it=m.begin();it!=m.end();it++)
  	{
  		cout<<(it->first)<<" "<<(it->second)<<endl;
  	}
}