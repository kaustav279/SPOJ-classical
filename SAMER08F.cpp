#include <iostream>
using namespace std;

int main()
{
	int n,ans;
	while(1)
	{
		cin>>n;
		if (n == 0)
		{
			break;
		}

		ans = 0;

		int ps;
		for (int i = 1; i <= n; i++)
		{
			ps = n-i+1;
			ans += ps*ps;
		}
		cout<<ans<<"\n";
	}

	return 0;
}