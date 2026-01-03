#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	vector<vector<int>> a(4, vector<int>(3));
	vector<vector<int>> b(4, vector<int>(3));
	int i, j,k,n,ttl=0;
	while (cin >> n)
	{
		for (k = 1; k <= n; k++)
		{
			ttl = 0;
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					cin >> a[j][i];
				}
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					cin >> b[j][i];
				}
			}
            for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					if (a[j][i] == b[j][i])
						ttl++;
				}
			}
		cout<<ttl<<endl;
		}
	}
}