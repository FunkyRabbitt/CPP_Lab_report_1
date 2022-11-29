#include <iostream>
using namespace std;
float SI(float p, float t, float r = 12.0)
{
    return ((p * t * r) / 100.0);
}
int main()
{
    int principle, time, rate, choice;
    cout << "Enter the Principle Time and Rate: ";
    cin >> principle >> time >> rate;
    cout << "If you want a special rate choose 1: ";
    cin >> choice;
    if (choice == 1)
        cout << "The SI of special rate is: " << SI(principle, time, rate);
    else
        cout << "The SI with regular rate is: " << SI(principle, time);
    return 0;
}
