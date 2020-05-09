#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;

		double pdiag = (sqrt(x*8+1) - 1)/2;
		double prev_diag;
		double frac = modf(pdiag,&prev_diag);
		if (frac == 0)
		{
			prev_diag--;
		}

		int dix = x - (prev_diag*(prev_diag+1)/2);
		int ocor = prev_diag+2-dix;

		cout<<"TERM "<<x<<" IS ";
		if (static_cast<int>(prev_diag) % 2 == 0)
		{
			cout<<ocor<<"/"<<dix<<"\n";
		}
		else
		{
			cout<<dix<<"/"<<ocor<<"\n";
		}
	}

	return 0;
}