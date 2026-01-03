#include <iostream>
#include <iomanip>
using namespace std;
struct fushu
{
	float shi;
	float xu;
};
void funcxu(float a, float b,float c,float d, char fun)
{
	switch (fun)
	{
	case'+':
		cout<<fixed<<setprecision(2)<<  a + b<<" "<<c+d<<endl;
		return;
	case'-':
		cout << fixed << setprecision(2) << a - b << " " << c - d << endl;
		return;
	case'*':
		cout << fixed << setprecision(2) << a * b-c*d << " " << a*d+c*b << endl;
		return;
	case '/':
		cout << fixed << setprecision(2) << (a * b +c*d)/(b*b+d*d) << " " << (c * b - a * d) / (b * b + d * d) << endl;
		return;
	}
}
int main()
{
	char funcc;
	fushu a, b;
	while (cin >> funcc)
	{
		cin >> a.shi>>a.xu;
		cin >> b.shi >> b.xu;
		funcxu(a.shi, b.shi,a.xu,b.xu ,funcc) ;
		
	}
}
