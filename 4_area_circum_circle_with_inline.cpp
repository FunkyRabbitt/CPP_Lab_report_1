#include <iostream>
using namespace std;
inline float circle(float r, float area, float circumference)
{
    area = 3.14 * (r * r);
    circumference = 2 * 3.14 * r;
    cout << "Area = " << area << endl << "Circumference = " << circumference;
    return 0;
}
int main()
{
    int radius,a,c;
    cout<<"enter the radius: ";
    cin>> radius;
    cout<<"The area and circumference are : \n";
    circle(radius,a,c);
    return 0;
}