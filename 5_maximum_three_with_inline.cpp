#include <iostream>
using namespace std;
inline int maximum(int x, int y, int z)
{
    if ((x>y) && (x>z))
   {
      return x;
   }
   else if ((y>x) && (y>z))
   {
      return y;
   }
   else 
   {
      return z;
   }
}
int main()
{
    int n1, n2, n3;
    cout << "Enter any three numbers: ";
    cin >> n1, n2, n3;
    cout << maximum(n1, n2, n3)<<" is maximum.";
    return 0;
}