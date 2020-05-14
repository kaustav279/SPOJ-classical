#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int hotels[n];
	int maxum = 0;
	int open = 1;

	int ix = 0;
	int fx;
	for (int i = 0; i < n; i++)
	{
		cin>>hotels[i];
		if (open && ((maxum+hotels[i]) <= m))
		{
			maxum += hotels[i];
			fx = i;
		}
		else
		{
			open = 0;
		}
	}

	int tempmax = maxum;

	while(fx != n-1)
	{
		tempmax -= hotels[ix];
		ix++;
		while(((fx+1) < n) && ((tempmax+hotels[fx+1]) <= m))
		{
			tempmax += hotels[++fx];
		}

		maxum = (maxum<tempmax)?tempmax:maxum;
	}
	cout<<maxum<<endl;

	return 0;
}