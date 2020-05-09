#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack<int> s;
		string exp;
		cin>>exp;

		for (int i = 0; i < exp.length(); i++)
		{
			char ch = exp[i];
			if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
			{
				cout<<ch;
			}
			else if (ch == ')')
			{
				char c2;
				while(1)
				{
					c2 = s.top();
					s.pop();
					if (c2 == '(')
					{
						break;
					}
					cout<<c2;
				}
			}
			else
			{
				s.push(ch);
			}
		}
		cout<<"\n";
	}

	return 0;
}