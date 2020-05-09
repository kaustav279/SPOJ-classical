#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int tx = t;
	while(t--)
	{
		int n;
		cin>>n;
		if (n == 0)
		{
			cout<<"Case "<<(tx-t)<<": 0\n";
			continue;
		}
		long long int maxco[n];
		for (int i = 0; i < n; i++)
		{
			cin>>maxco[i];
			if (i == 1)
			{
				maxco[i] = max((maxco[0]), (maxco[1]));
			}
			if (i == 2)
			{
				maxco[i] = max((maxco[i]+maxco[0]), maxco[1]);
			}
			else if (i > 2)
			{
				maxco[i] = max((maxco[i-1]), (maxco[i-2]+maxco[i]));
			}
		}
		cout<<"Case "<<(tx-t)<<": "<<maxco[n-1]<<"\n";
	}

	return 0;
}