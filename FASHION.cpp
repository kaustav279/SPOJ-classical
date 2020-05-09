#include <iostream>
using namespace std;

int maxx(int arr[],int length)
{
	int ans;
	int mxi = 0;
	for (int ix = 1; ix < length; ix++)
	{
		if (arr[ix] > arr[mxi])
		{
			mxi = ix;
		}
	}
	ans = arr[mxi];
	arr[mxi] = -1;

	return ans;
}

int main()
{
	int t;
	cin>>t;
	for (int tx = 0; tx < t; tx++)
	{
		int ans = 0;
		int nop;
		cin>>nop;
		int men[nop];
		int wom[nop];
		int p;
		for (p = 0; p < nop; p++)
		{
			cin>>men[p];
		}
		for (p = 0; p < nop; p++)
		{
			cin>>wom[p];
		}

		for (p = 0; p < nop; p++)
		{
			ans += (maxx(men,nop)*maxx(wom,nop));
		}
		cout<<ans<<"\n";
	}

	return 0;
}