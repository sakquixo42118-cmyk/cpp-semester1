#include <string>
#include <iostream>
#include<math.h>
using namespace std;
int count(string a, string b)
{
	int sum,i;
	sum = 0;
	for (i = 0; i < a.size(); i++)
	{
		int t = b.find(a[i]);
		sum += abs(t - i);
	}
	return sum;
}
int main()
{
	string s, t;
	while (cin >> s >> t)
	{
		cout << count(s, t) << endl;
	}
}
