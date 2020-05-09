#include <bits/stdc++.h>
using namespace std;

int mat[100][100];

int maxm(int x, int y, int z)
{
	return max(max(x,y),z);
}

int max_ps(int r, int c)
{
	int c1,c2,c3;
	for (int i = 1; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			c1 = mat[i-1][j];
			c2 = (j != 0)?(mat[i-1][j-1]):0;
			c3 = (j != c-1)?(mat[i-1][j+1]):0;

			mat[i][j] += maxm(c1,c2,c3);
		}
	}
	int ans = mat[r-1][0];
	for (int k = 1; k < c; k++)
	{
		ans = (mat[r-1][k] > ans)?(mat[r-1][k]):ans;
	}

	return ans;
}

int main()
{
	int t;
	cin>>t;
	int r,c;
	while(t--)
	{
		cin>>r>>c;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cin>>mat[i][j];
			}
		}

		cout<<max_ps(r,c)<<"\n";
	}

	return 0;
}