#include <iostream>
#include <cmath>
using namespace std;
using lli = long long int;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		lli n;
		cin>>n;

		lli ans = ((n*(n+2)*(2*n+1))/8);
		cout<<ans<<"\n";
	}

	return 0;
}