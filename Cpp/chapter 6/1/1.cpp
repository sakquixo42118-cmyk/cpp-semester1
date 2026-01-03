#include <iostream>
#include <iomanip>
using namespace std;
void bitdspl(int n)
{
	int i,va=1;
	for (i = 31; i >-1; i--)
	{
		cout << (n & (va << i)?'1':'0');
	}
}
int main()
{
	int i;
	while (cin >> i)
	{


			cout << "before shift: ";
			bitdspl(i);
			cout << endl;
			i = i >> 4;
			cout << "after shift: ";
			bitdspl(i);
			cout << endl;
		}

	}


