#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if (n == -1)
		{
			break;
		}

		int packs[n];
		int avg = 0;
		for (int i = 0; i < n; i++)
		{
			cin>>packs[i];
			avg += packs[i];
		}

		if (avg % n == 0)
		{
			avg /= n;
			int ans = 0;
			for (int x:packs)
			{
				if (x > avg)
				{
					ans += (x-avg);
				}
			}
			cout<<ans<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}

	}
	return 0;
}