#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int tx = t;
	int ans[t];

	while(tx--)
	{
		int x,y;
		cin>>x>>y;
		int tans;
		if (x == y || x == y+2)
		{
			tans = x+y;
			if (x % 2 != 0)
				tans--;
		}
		else
		{
			tans = -1;
		}

		ans[t-tx-1] = tans;
	}

	for (int el:ans)
	{
		if (el >= 0)
			cout<<el<<"\n";
		else
			cout<<"No Number"<<"\n";
	}
	
	return 0;
}