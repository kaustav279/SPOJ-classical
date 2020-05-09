#include <iostream>
using namespace std;

int main()
{
	int a1,a2,a3;
	while(1)
	{
		cin>>a1>>a2>>a3;
		if (a1 == 0 && a2 == 0 && a3 == 0)
		{
			break;
		}

		int d1 = a2-a1;
		int d2 = a3-a2;
		if (d1 == d2)
		{
			cout<<"AP "<<(a3+d1)<<"\n";
		}
		else
		{
			cout<<"GP "<<(a3*(a2/a1))<<"\n";
		}
	}

	return 0;
}