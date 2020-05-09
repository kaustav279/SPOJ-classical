#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a = (3*(((n*(n+1)))/2) - n)%1000007;
		cout<<a<<"\n";
	}

	return 0;
}