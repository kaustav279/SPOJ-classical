#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main()
{
	string num;
	int x;
	while(1)
	{
		cin>>num;
		x = num[0]-48;
		if (x == 0)
		{
			break;
		}

		lli combos[num.length()];
		combos[0] = 1;
		lli flag = 1;
		int posno;
		for (int i = 1; i < num.length(); i++)
		{
			combos[i] = combos[i-1];
			posno = (num[i-1]-48)*10+(num[i]-48);
			if (posno <= 26 && posno >= 11 && posno != 20)
			{
				combos[i] += flag;
			}
			else if (posno == 10 || posno == 20)
			{
				combos[i] = flag;
			}
			flag = combos[i-1];
		}
		cout<<combos[num.length()-1]<<"\n";
	}

	return 0;
}