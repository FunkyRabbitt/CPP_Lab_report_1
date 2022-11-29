#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, rem, sum = 0, flag;
    cout << "Enter a number: " << endl;
    cin >> num;
    flag = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = pow(rem, 3);
        num = num / 10;
    }
    if (flag == sum)
    {
        cout << "The given number " << flag << " is armstrong.";
    }
    else
    {
        cout<<"The given number " << flag << " is not armstrong.";
    }
    return 0;
}