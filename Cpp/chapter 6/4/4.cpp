#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
struct stu
{
	string name;
	float grd;
};
bool judge(vector<stu> a, int n,int h)
{
	int i,ttl=0;
	for (i = 0; i < n; i++)
	{
		if (a[h].grd >= a[i].grd)
		{
			ttl++;
	 }
	}
	if (ttl == n)
		return 1;
	else
		return 0;
}
int main()
{
	int n,i;
	while (cin >> n)
	{
		vector<stu> a(n);
		for (i = 0; i < n; i++)
		{
			cin >> a[i].name;
			cin >> a[i].grd;
		}
		for (i = 0; i < n; i++)
		{
			if (judge(a, n, i))
			{
				cout << a[i].name << " " <<fixed<<setprecision(2)<< a[i].grd << endl;
			}
		}
	}
}
