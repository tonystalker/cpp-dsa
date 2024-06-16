#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
		/* code */
	}	
	for (int i = 0; i <n; ++i)
	{
		int min=i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			/* code */
		}
		swap(a[i],a[min]);
		/* code */
	}
	for (int i = 0; i < n; ++i)

	{
		cout<<a[i]<<" ";
		/* code */
	}
}
//o(n2) complexity