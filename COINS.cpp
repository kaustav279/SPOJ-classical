#include <iostream>
#include <iterator>
#include <map>
using namespace std;

using lli = long long int;

lli max_amt(lli n, map<lli,lli>& maxams)
{
	if (n == 0)
	{
		return 0;
	}

	for (auto itr = maxams.begin(); itr != maxams.end(); itr++)
	{
		if (itr->first == n)
		{
			return itr->second;
		}
	}
	
	lli n2 = max_amt(n/2,maxams);
	lli n3 = max_amt(n/3,maxams);
	lli n4 = max_amt(n/4,maxams);

	lli alt = n2 + n3 + n4;
	lli ans = (n>alt)?n:alt;

	maxams.insert({n,ans});

	return ans;
}

int main()
{
	lli x;
	map<lli,lli> vals;
	map<lli,lli>& mapref = vals;

	while(cin>>x)
	{
		cout<<max_amt(x,mapref)<<"\n";
	}

	return 0;
}