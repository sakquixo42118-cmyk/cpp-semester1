#include <string>
#include <iostream>
using namespace std;
int main(){
	string in;
	while ( getline(cin,in))
	{
		int rond;
		int a=0, e=0, i=0, o=0, u=0;
		for (rond = 0; rond < in.size(); rond++)
		{
			switch (in[rond])
			{
			case 'A':
			case'a':
				a++;
				break;
			case'E':
			case'e':
				e++;
				break;
			case'I':
			case'i':
				i++;
				break;
			case'O':
			case'o':
				o++;
				break;
			case'U':
			case'u':
				u++;
				break;

			}
		
		}
		cout << "A: " << a << endl;
		cout << "E: " << e << endl;
		cout << "I: " << i << endl;
		cout << "O: " << o << endl;
		cout << "U: " << u << endl;
	}
}