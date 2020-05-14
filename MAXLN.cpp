#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int tx = t;
	while(t--)
	{
		long long int x;
		cin>>x;
		x = x*x*4;
		cout<<"Case "<<(tx-t)<<": "<<x<<".25\n";
	}
	return 0;
}