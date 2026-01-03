#include <vector>
#include <iostream>
using namespace std;
int w, d;
bool andian(vector<vector<int>>& a,int n)
{
	int i, j, p, q;
	int z, y;
	bool ttl=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			z = 0;
			y = 0;
			for (p = 0; p < n; p++)
			{
				if (a[j][i] < a[p][i])
				{
					ttl = 0;
					break;
				}
				else {
					y++;
				}
			}
		    for (q = 0; q < n; q++)
			{
				if (a[j][i] > a[j][q])
				{
					ttl = 0;
					break;
				}
				else {
					z++;
				}
			}
			if (z + y == 2*n)
			{
				w = i;
				d = j;
				ttl = 1;
				return ttl;
			}
		}
	}
		return ttl;
}
int main()
{
	int n,i,j;
	while (cin >> n)
	{
		vector<vector<int>> a(n, vector <int>(n));
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[j][i];
			}
		}
		if (!andian(a, n))
			cout << "没有鞍点"<<endl;
		else {
			cout << w <<" " << d << endl;
		}
	}
}

