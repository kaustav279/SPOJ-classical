#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
		double n;
		cin>>n;

		if (n == 0.0)
			break;

		double i=2,sum=0;
		for (i = 2, sum = 0; sum < n; sum+=(1/i),i++){}

		cout<<(i-2)<<" card(s)\n";
	}
	
	return 0;
}