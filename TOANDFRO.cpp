#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cols;
	while(1)
	{
		cin>>cols;
		if (cols == 0)
			break;
		
		string encrypted;
		cin>>encrypted;

		int steps[2] = {2*cols-1,1};
		int rows = encrypted.length()/cols;
		for (int i = 0; i < cols; i++)
		{
			int cur = 0;
			int ix = i;
			for (int j = 0; j < rows; j++)
			{
				cout<<encrypted[ix];
				ix += steps[cur];
				cur = 1-cur;
			}

			steps[0]-=2;
			steps[1]+=2;
		}
		cout<<"\n";
	}
}