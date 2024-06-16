#include <bits/stdc++.h>
using namespace std;

const int M=1e7;
int hsh[M];
int main()
{
	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n ;++i)
	{
		cin>>a[i];
		hsh[a[i]]++;

	
}
int t;
cin>>t;
while(t--)
{
	int m;
	cin>>m;
	cout<<hsh[m]<<endl;
}
}


	
//Hashing example