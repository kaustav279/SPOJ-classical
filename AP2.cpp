#include <iostream>
using namespace std;
using lolo = long long;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		lolo third_term,third_last_term,series_sum;
		cin>>third_term>>third_last_term>>series_sum;

		lolo n = (series_sum * 2) / (third_term + third_last_term);
		lolo d = (third_term - third_last_term) / (5 - n);
		lolo a = third_term - (d * 2);

		cout<<n<<"\n";
		for (int i = 0; i < n; i++)
		{
			cout<<a<<" ";
			a += d;
		}
		cout<<"\n";
	}

	return 0;
}