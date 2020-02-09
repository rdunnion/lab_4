// Lab 4 areas.cpp 
// this program finds the area of three shapes
// Ryan Dunnion

#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    int padding = 8;
    int shape = 0;
    double width = 0;
    double length = 0;
    double radius = 0;
    double base = 0;
    double height = 0;
    double area = 0;
    
    // prints instructions and requests selection
    cout << "Program to calculate areas of objects\n\n"
        << right
        << setw(padding) << "" << "1 -- square\n"
        << setw(padding) << "" << "2 -- circle\n"
        << setw(padding) << "" << "3 -- right triangle\n"
        << setw(padding) << "" << "4 -- quit\n\n";
    cout << "Choose one number:\n";
    cin >> shape;

    switch (shape) 
    {
        // calculates area of a square
        case 1:
            cout << "Please enter the width of the square in inches:\n";
            cin >> width;
            cout << "Please enter the length of the square in inches:\n";
            cin >> length;
            area = length * width;
            cout << "The length of the square is: " << length << " in.\n"
                << "The width of the square is: " << width << " in.\n"
                << "The area is: " << area << " in.\n";
            break;

        // calculates area of a circle
        case 2:
            cout << "Please enter the radius of the circle in inches:\n";
            cin >> radius;
            area = PI * pow(radius, 2);
            cout << "The radius of the square is: " << radius << " in.\n"
                << "The area is: " << area << " in.\n";
            break;

        // calculates area of a right triangle
        case 3:
            cout << "Please enter the base of the right triangle in inches:\n";
            cin >> base;
            cout << "Please enter the height of the right triangle in inches:\n";
            cin >> height;
            area = (base * height) / 2;
            cout << "The base of the right triangle is: " << base << " in.\n"
                << "The height of the right triangle is: " << height << " in.\n"
                << "The area is: " << area << " in.\n";
            break;

        // quits the program
        case 4:
            return 0;
            break;

        // deals with erroneous characters
        default:
            cout << "You have entered a wrong character. Goodbye.\n";
    }
    return 0;
}