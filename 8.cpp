#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;char s;string str_rev;
cin>>str;
	for (int i = str.size()-1 ;i >=0 ; i--)
	{/*s=str[i];
		cout<<s;*/
		/* code */
		str_rev.push_back(str[i]);
	}
	if(str==str_rev)
	cout<<str_rev;
	
}
