#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int ans[t];

	for (int it = 0; it < t; it++)
	{
		int num;
		cin>>num;

		int ff = 0;
		int log5 = log(num)/log(5);
		for (int s = 1; s <= log5; s++)
		{
			ff += num/(pow(5,s));
		}
		ans[it] = ff;
	}
	for (auto x:ans)
		cout<<x<<"\n";

	return 0;
}