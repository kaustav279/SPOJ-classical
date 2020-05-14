#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int n;
	double root,frac;
	while(1)
	{
		cin>>n;
		if (n == -1)
		{
			break;
		}
		root = sqrt(n*12 - 3);
		frac = modf(root,&root);
		if (frac == 0.0)
		{
			cout<<"Y\n";
		}
		else
		{
			cout<<"N\n";
		}
	}

	return 0;
}