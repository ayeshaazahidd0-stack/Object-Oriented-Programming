#include <iostream>
#include <string>

using namespace std;

struct Distance {
int feet;
double inches;
};

struct Triangle {
Distance base;
Distance height;
};

int main()
{
Triangle t ;

cout << " Enter base in inches: ";
cin >> t.base.inches;

cout << " Enter base in feet: ";
cin >> t.base.feet;

cout << " Enter height in inches: ";
cin >> t.height.inches;

cout << " Enter height in feet: ";
cin >> t.height.feet;

double baseInInches = (12 * t.base.feet) + t.base.inches;
double heightInInches = (12 * t.height.feet) + t.height.inches;

double area = 0.5 * (baseInInches * heightInInches);

cout << " Area of Triangle is " << area << " inches";

return 0;
}
