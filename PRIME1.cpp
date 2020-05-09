#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	int* p = new int[t*2];
	for (int a = 0; a < t; a++)
	{
		cin>>p[2*a]>>p[2*a+1];
	}

	for (int i = 0; i < t; i++)
	{
		int m = p[2*i];
		int n = p[2*i+1];

		int nums[n-m+1] = {0};

		for (int x = m; x <= n; x++)
		{
			for (int f = 2; f <= sqrt(x); f++)
			{
				if (x % f == 0)
				{
					nums[x-m] = 1;
					break;
				}
			}
		}
		for (int h = m; h <= n; h++)
		{
			if (nums[h-m] == 0 && h != 1)
				cout<<h<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}