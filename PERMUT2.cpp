#include <iostream>
using namespace std;

int main()
{
	int n;
	while(1)
	{
		cin>>n;
		if (n == 0)
			break;

		int els[n];
		for (int i = 0; i < n; i++)
		{
			cin>>els[i];
		}

		int j;
		for (j = 1; j <= n; j++)
		{
			if (els[els[j-1]-1] != j)
			{
				break;
			}
		}

		if (j != n+1)
		{
			cout<<"not ambiguous\n";
		}
		else
		{
			cout<<"ambiguous\n";
		}
	}

	return 0;
}