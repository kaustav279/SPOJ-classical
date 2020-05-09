#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int ng,nm;
		cin>>ng>>nm;

		int mg = INT_MIN;
		int mm = INT_MIN;
		int elx;
		for (int i = 0; i < ng; i++)
		{
			cin>>elx;
			mg = (elx>mg)?elx:mg;
		}
		for (int j = 0; j < nm; j++)
		{
			cin>>elx;
			mm = (elx>mm)?elx:mm;
		}
		if (mg >= mm)
		{
			cout<<"Godzilla\n";
		}
		else
		{
			cout<<"MechaGodzilla\n";
		}
	}

	return 0;
}