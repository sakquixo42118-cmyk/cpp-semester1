#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	
	string in;

	int i, m;
	while (getline(cin, in))
	{
		vector <string> a;
		int j = 0;
		int k = 0;
		for (i = 0; i < in.size(); i++)
		{

			if (in[i] != ' ' && i != in.size() - 1)
			{
				j++;
			}
			if (in[i] == ' ')
			{
				string temp;
				for (m = i - j; m < i; m++)
				{
					temp.push_back(in[m]);
				}
				a.push_back(temp);
				j = 0;
			}
			if (i == in.size() - 1)
			{
				j++;
				string temp;
				for (m = i - j + 1; m < i + 1; m++)
				{
					temp.push_back(in[m]);
				}
				a.push_back(temp);
				j = 0;
			}

		}



		for (i = a.size() - 1; i > -1; i--)
		{
			int quant = a[i].size();
			char temp;
			if (quant % 2 == 0)
			{
				for (m = 0; m < quant / 2 ; m++)
				{
					temp = a[i][m];
					a[i][m] = a[i][quant - m - 1];
					a[i][quant - m - 1] = temp;
				}
				for (m = 0; m < quant; m++)
				{
					cout << a[i][m];
				}
				cout << " ";
			}
			if (quant % 2 == 1)
			{
				for (m = 0; m < quant / 2; m=m+2)
				{
					temp = a[i][m];
					a[i][m] = a[i][quant - m - 1];
					a[i][quant - m - 1] = temp;
				}
				for (m = 0; m < quant; m++)
				{
					cout << a[i][m];
				}
				cout << " ";
			}
		}
		cout << endl;
	}
}