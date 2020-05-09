#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	while(1)
	{
		cin>>n;
		if (n == 0)
		{
			break;
		}

		stack<int> s;
		int curla = 0;
		int truck;

		for (int i = 0; i < n; i++)
		{
			cin>>truck;

			if (truck == curla+1)
			{
				curla = truck;
			}
			else
			{
				s.push(truck);
			}

			while (!s.empty() && s.top() == curla+1)
			{
				curla = s.top();
				s.pop();
			}
		}

		if (curla == n)
		{
			cout<<"yes\n";
		}
		else
		{
			cout<<"no\n";
		}
	}

	return 0;
}