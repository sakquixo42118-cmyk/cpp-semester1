#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	string in;
	while (cin >> in)
	{
		int i,ttl=0;
		for (i = 0; i < in.size(); i++)
		{
			ttl += (in[i] - '0') * ((int(pow(2, in.size() - i))) - 1);
		}
		cout << ttl<<endl;
	}
}