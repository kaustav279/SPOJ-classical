#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int ans = 0;
	for (int i = 1; i <= sqrt(n); i++)		//i = length of a side; sqrt because after that, all rectangles repeat
	{
		ans += n/i - (i-1);		//(n/i) = no. of recangles which can be formed with i as side and less than n squares
								//(i-1) subtracted because (i-1) of the (n/i) would have been counted in prev iters of loop
	}
	cout<<ans<<"\n";
}