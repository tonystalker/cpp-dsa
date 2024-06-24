#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		multiset<long long> bags;
		for (int i = 0; i < n; ++i)
		{
		int cand_ct;
		cin>>cand_ct;
		bags.insert(cand_ct);
			/* code */
		}
		long long total_candy=0;
		for (int i = 0; i < k; ++i)
		{
			/* code */auto last_it=(--bags.end());
			int cand_ct=*last_it;
			total_candy+=cand_ct;
			bags.erase(last_it);
			bags.insert(cand_ct/2);
		}
		cout<<total_candy<<endl;
	}
	
} 