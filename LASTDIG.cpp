#include <iostream>
#include <cmath>
using namespace std;

//using properties of modular arithmetic
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;

		int ans = 1;
		int am = a % 10;
		while (b > 0)
		{
			ans =  (ans * static_cast<int>(pow(am,b%2))) % 10;
			b /= 2;
			am = static_cast<int>(pow(am,2)) % 10;
		}
		cout<<ans<<"\n";
	}

	return 0;
}