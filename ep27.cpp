#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<string> s;
	s.insert("a");
	s.insert("b");
	auto it=s.find("a");
	cout<<*it;
}