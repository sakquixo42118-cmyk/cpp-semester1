#include <string>
#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
int main()
{
	int i,j,sequn;
	string m, n;
	while (cin >> m >> n)
	{
		vector <int> a(m.size());
		vector <int> b(m.size());
		for (i = 0; i < m.size(); i++)
		{
			a[i] = i;
			for (j = 0; j < m.size(); j++)
			{
				if (n[j] == m[i])
					b[i] = j;
			}
		}
		int sum=0;
		for (i = 0; i < m.size(); i++)
		{
			sum += fabs(a[i] - b[i]);
		}
		cout << sum<<endl;
	}
}

