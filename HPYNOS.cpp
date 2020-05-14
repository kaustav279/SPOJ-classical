#include <iostream>
#include <cmath>
#include<unordered_map>
using namespace std;

int break_it(int num)
{
	int ans = 0;
	while(num != 0)
	{
		ans += pow(num%10,2);
		num /= 10;
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;

	int br = n;
	unordered_map<int,int> hash;
	int tims = 0;
	while(1)
	{
		hash[br] = 1;
		br = break_it(br);
		tims++;
		if (br == 1)
		{
			cout<<tims<<"\n";
			break;
		}
		else if (hash.find(br) != hash.end())
		{
			cout<<"-1\n";
			break;
		}
	}
	return 0;
}