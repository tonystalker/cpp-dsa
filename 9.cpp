#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	b=a+b;
	a=b-a;
	b=b-a;
}
int main()
{
	int n,m;
cin>>n>>m;
	swap(n,m);
	cout<<n<<" "<<m;
}