#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int phash[N];
int a[10];
int main()
{
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		
	}
phash[0]=a[0];
	for (int i = 1; i < n; ++i)
{
phash[i]=phash[i-1]+a[i];
}
int t;
cin>>t;
while(t--){
	int a,b;
	cin>>a>>b;
	cout<<phash[b]-phash[a-1]<<endl;
}
	
}