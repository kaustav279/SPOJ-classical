#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a,b;
	while(t--)
	{
		cin>>a>>b;
		cout<<((b)?"Pagfloyd":"Airborne")<<" wins.\n";
	}
	return 0;
}