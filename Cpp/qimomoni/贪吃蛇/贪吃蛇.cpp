#include <vector>
#include <iostream>
using namespace std;
void crt(vector<vector<int>>& a,int row,int col)
{
	int i, j;
	bool ji;
	if (col % 2 == 0)
		ji = 0;
	else
		ji = 1;
	if (ji)
	{
		for (j = 0; j < col; )
		{
			for (i = 0; i < row; i++)
			{
				a[i][j] = row * j + i + 1;
			}
			j += 2;
		}
		for (j = 1; j < col-1; )
		{
			for (i = 0; i < row; i++)
			{
				a[row-i-1][j] = row * j + i + 1;
			}
			j += 2;
		}
	}
	if (!ji)
	{
		for (j = 0; j < col-1; )
		{
			for (i = 0; i < row; i++)
			{
				a[i][j] = row * j + i + 1;
			}
			j += 2;
		}
		for (j = 1; j < col ; )
		{
			for (i = 0; i < row; i++)
			{
				a[row-1-i][j] = row * j + i + 1;
			}
			j += 2;
		}
	}
}
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		vector<vector<int>> a(m, vector<int>(n));
		crt(a, m, n);
		int i, j;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}
