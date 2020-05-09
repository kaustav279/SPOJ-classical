#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string inp;
		do
		{
			getline(cin,inp);
		} while(inp.length() == 0);

		int spr = 0;
		int ix = 0;
		int flaw;
		string nums[3];
		string curr;
		for (int ix = 0; ix < inp.length(); ix++)
		{
			char c = inp[ix];
			if (c != '+' && c != '=')
			{
				if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
				{
					flaw = spr/2;
				}
				else if (c == ' ')
				{
					spr++;
				}
				else
				{
					nums[spr/2] += c;
				}
			}
		}

		if (flaw < 2)
		{
			nums[flaw] = to_string(stoi(nums[2]) - stoi(nums[1-flaw]));
		}
		else
		{
			nums[flaw] = to_string(stoi(nums[0]) + stoi(nums[1]));
		}
		cout<<nums[0]<<" + "<<nums[1]<<" = "<<nums[2]<<"\n";
	}

	return 0;
}