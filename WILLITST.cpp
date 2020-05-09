#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin>>n;

	int flag = 0;
	while(n != 0)
	{
		flag += (n & 1);
		n = n>>1;
	}

	if (flag <= 1)
	{
		cout<<"TAK\n";
	}
	else
	{
		cout<<"NIE\n";
	}

	return 0;
}