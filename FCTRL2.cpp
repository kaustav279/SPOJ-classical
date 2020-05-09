#include <iostream>
using namespace std;
//obvious way wont work as C++ cant store numbers as large as 100! in a primitive datatype
//store a number in an array (1 digit per index)

int main()
{
	int t;
	cin>>t;
	int ans[t][200];
	int mxs[t];

	for (int fc = 0; fc < t; fc++)
	{
		int num;
		cin>>num;
		int num2 = num;

		int* arno = ans[fc];
		int idx = 0;
		while (num2 != 0)
		{
			arno[idx] = num2%10;
			num2 /= 10;
			idx++;
		}

		int midx = idx;

		for (int i = 2; i < num; i++)
		{
			int temp = 0;

			for (idx = 0; idx < midx; idx++)
			{
				int w = arno[idx]*i + temp;
				arno[idx] = w%10;
				temp = w/10;
			}

			while (temp != 0)
			{
				arno[midx] = temp%10;
				temp /= 10;
				midx++;
			}
		}
		mxs[fc] = midx;
	}

	for (int yy = 0; yy < t; yy++)
	{
		for(int jj = mxs[yy]-1; jj >= 0; jj--)
			cout<<ans[yy][jj];
		cout<<"\n";
	}
	return 0;
}