#include <bits/stdc++.h>
using namespace std;


int mat[2005][2005];
string s1,s2;

int mini(int x, int y, int z)
{
	return min(min(x,y),z);
}

int edist(int r, int c)
{
	
	if (r == 0)
	{
		return c;
	}
	if (c == 0)
	{
		return r;
	}

	if (mat[r-1][c-1] != 0)
	{
		return mat[r-1][c-1];
	}

	int ans;
	if (s1[r-1] == s2[c-1])
	{
		ans = edist(r-1,c-1);
	}
	else
	{
		ans = 1 + mini(edist(r-1,c-1), edist(r-1,c), edist(r,c-1));
	}

	mat[r-1][c-1] = ans;
	return ans;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		cin>>s1;
		cin>>s2;
		memset(mat,0,sizeof(mat));
		cout<<edist(s1.length(),s2.length())<<"\n";
	}

	return 0;
}