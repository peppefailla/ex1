#include <iostream>
using namespace std;

/*
Write a C++ program to create a class called Rectangle that has private member
variables for length and width.
Implement member functions to calculate the rectangle's area and perimeter
*/

class Rect{
    private:
        int length;
        int width;

    public:
    Rect(double len, double wid): length(len), width(wid) {}

    double calculateArea(){
        return length*width;
    }

    double calculatePerimeter() {
        return 2 * (length + width); // Formula to calculate the perimeter of a rectangle
    }

};

int main(void){
    double length = 10;
    double width = 11;

    Rect rectangle(length, width); //len, width

    cout << rectangle.calculateArea() << endl;

    return 0;

}
