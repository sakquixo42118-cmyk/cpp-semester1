#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,i,srch;
    bool fnd=0;
    string name[100];
    while (cin >> n) {
      vector <int> a(n);
      for (i = 0; i < n; i++)
      {
          cin >>name[i];
          cin >> a[i];
      }
      cin >> srch;
      for (i = 0; i < n; i++)
      {
          if (srch == a[i])
          {
              cout << name[i]<<endl;
              fnd = 1;
          }
      }
      if (!fnd)
      {
          cout << "Not Found" << endl;
     }
    }
}