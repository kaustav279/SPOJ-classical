#include <bits/stdc++.h>
using namespace std;

vector<int> add_vecs(vector<int> &x, vector<int> &y)	//y should be smaller than x
{
	vector<int> an;
	int temp = 0;
	int tsum;

	for (int i = 0; i < x.size(); i++)
	{
		tsum = x[i] + temp + ((i<y.size())?y[i]:0);
		an.push_back((tsum)%10);
		temp = tsum/10;
	}

	return an;
}

vector<int> sub_vecs(vector<int> &x, vector<int> &y)
{
	vector<int> an;

	int tdif;
	int bor = 0;
	for (int i = 0; i < x.size(); i++)
	{
		tdif = x[i] - bor - ((i<y.size())?y[i]:0);
		bor = 0;
		if (tdif < 0)
		{
			bor = 1;
			tdif = tdif+10;
		}
		an.push_back(tdif);
	}

	return an;
}

vector<int> div2_vec(vector<int> &x)
{
	vector<int> an;
	for (int i = 0; i < x.size(); i++)
	{
		an.push_back(x[i]/2);
		if (x[i] % 2 == 1)
		{
			an[i-1] += 5;
		}
	}

	return an;
}

void disp_vec(vector<int> &x)
{
	int lead_z = 1;
	for (int i = x.size()-1; i >= 0; i--)
	{
		if (!lead_z || x[i] != 0)
		{
			cout<<x[i];
			lead_z = 0;
		}
	}
	cout<<"\n";
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		string xl,yl;
		cin>>xl;
		cin>>yl;

		vector<int> x;
		vector<int> y;

		for (int a = xl.length()-1; a >= 0; a--)
		{
			x.push_back(static_cast<int>(xl[a])-48);		//48 is ascii code for 0
		}
		x.push_back(0);
		for (int b = yl.length()-1; b >= 0; b--)
		{	
			y.push_back(static_cast<int>(yl[b])-48);
		}
		y.push_back(0);

		vector<int> sum = add_vecs(x,y);
		vector<int> val1 = div2_vec(sum);

		vector<int> val2 = sub_vecs(x,val1);
		disp_vec(val1);
		disp_vec(val2);
	}

	return 0;
}