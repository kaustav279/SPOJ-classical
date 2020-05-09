#include <bits/stdc++.h>
using namespace std;

int main()
{
	double b,g,v1,v2;
	while (1)
	{
		cin>>b>>g;
		if (b == -1)
			break;

		v1 = max(b,g);
		v2 = min(b,g);

		cout<<ceil(v1/(v2+1))<<"\n";
	}

	return 0;
}