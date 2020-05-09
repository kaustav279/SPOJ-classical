#include <iostream>
using namespace std;

int revnum(int num)
{
	int rn = 0;
	do
	{
		rn = rn*10 + (num%10);
		num /= 10;
	} while (num != 0);

	return rn;
}

int main()
{
	int t;
	cin>>t;
	int rv[t];

	for (int i = 0; i < t; i++)
	{
		int m,n;
		cin>>m>>n;
		rv[i] = revnum(revnum(m)+revnum(n));
	}

	for (auto x:rv)
		cout<<x<<"\n";

	return 0;
}