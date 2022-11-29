#include <iostream>
using namespace std;
inline int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int n1, n2;
    cout << "Enter any two numbers: ";
    cin >> n1 >> n2;
    cout << "The sum is: " << add(n1, n2);
    return 0;
}
