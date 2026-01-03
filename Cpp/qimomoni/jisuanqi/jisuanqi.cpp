#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int i;
	string in;
	while (cin >> in)
	{
		vector<int> a;
		vector <char> b;
		for (i = 0; i < in.size();i++)
		{
			char c = in[i];
			if (isdigit(c))
			{
				if (i>0&&in[i - 1] == '*')
				{
					a.back() = a.back() * (c - '0');

				}
				else a.push_back(c - '0');
			}
			else
				if (c == '+' || c == '-')
				b.push_back(c);
		}
		int sum=a[0];
		for (i = 0; i < b.size(); i++)
		{
			switch (b[i])
			{
			case '+':
				sum += a[i + 1];
				break;
			case'-':
				sum -= a[i + 1];
				break;
			}
		}
		cout << sum << endl;
	}

}

