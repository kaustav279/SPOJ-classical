#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long int t;
	cin>>t;

	while(t--)
	{
		int ch;
		cin>>ch;
		int mod = 0;
		long long int tc;
		for (int i = 0; i < ch; i++)
		{
			cin>>tc;
			mod = (mod + (tc%ch)) % ch;		//no need to handle large sums if mod property used
		}

		if (mod == 0)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}