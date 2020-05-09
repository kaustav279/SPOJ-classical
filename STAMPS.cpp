#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int m = t;
	while(t--)
	{
		int nos,nop;
		cin>>nos>>nop;

		int gots = 0;

		int spp[nop];
		for (int i = 0; i < nop; i++)
		{
			cin>>spp[i];
		}
		sort(spp,spp+nop,greater<int>());

		int p;
		int d = 0;
		for (int j = 0; j < nop; j++)
		{
			gots += spp[j];

			if (gots >= nos)
			{
				d = 1;
				p = j+1;
				break;
			}
		}

		cout<<"Scenario #"<<(m-t)<<":\n";
		if (d)
			cout<<p<<"\n\n";
		else
			cout<<"impossible\n\n";
	}
	
	return 0;
}