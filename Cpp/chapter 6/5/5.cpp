using namespace std;
#include <iostream>
#include <vector>
struct xyz {
	float x;
	float y;
};
bool para(vector<xyz>a)
{
	vector <float> first(2);
	vector <float> second(2);
	first[0] = a[1].x - a[0].x;
	first[1] = a[1].y - a[0].y;
	second[0]=a[3].x - a[2].x;
	second[1] = a[3].y - a[2].y;
	if
		(first[0] / second[0] == first[1] / second[1] &&
			(first[0] * first[0] + first[1] * first[1]) == (second[0] * second[0] + second[1] * second[1]) &&
			(first[0] != 0 || first[1] != 0 || second[0] != 0 || second[1] != 0))
		return 1;
	if (first[0] == 0 && second[0] == 0 && (first[0] * first[0] + first[1] * first[1]) == (second[0] * second[0] + second[1] * second[1]))
		return 1;
	if (first[1] == 0 && second[1] == 0 && (first[0] * first[0] + first[1] * first[1]) == (second[0] * second[0] + second[1] * second[1]))
		return 1;
	else
		return 0;
}
bool matrix(vector<xyz>a)
{
	vector <float> first(2);
	vector <float> second(2);
	first[0] = a[1].x - a[0].x;
	first[1] = a[1].y - a[0].y;
	second[0] = a[2].x - a[1].x;
	second[1] = a[2].y - a[1].y;
	if (first[0] * second[0] + first[1] * second[1] == 0)
		return 1;
	else return 0;
}
bool round(vector<xyz>a)
{
	vector <float> first(2);
	vector <float> second(2);
	first[0] = a[1].x - a[0].x;
	first[1] = a[1].y - a[0].y;
	second[0] = a[2].x - a[1].x;
	second[1] = a[2].y - a[1].y;
	if ((first[0] * first[0] + first[1] * first[1]) == (second[0] * second[0] + second[1] * second[1]))
		return 1;
	else return 0;
}

int main()
{
	int i;
	vector <xyz> a(4);
	while (cin >> a[0].x)
	{
		cin >> a[0].y;
		cin >> a[1].x;
		cin >> a[1].y;
		cin >> a[2].x;
		cin >> a[2].y;
		cin >> a[3].x;
		cin >> a[3].y;
		if (!para(a))
			cout << "Other Quadrilateral" << endl;
		if (para(a)&&!matrix(a))
			cout<< "Other Quadrilateral" << endl;
		if (para(a) && matrix(a) && !round(a))
			cout << "Rectangle" << endl;
		if (para(a) && matrix(a) && round(a))
			cout << "Square" << endl;

	}
}
