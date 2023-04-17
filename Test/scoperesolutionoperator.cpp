#include <iostream>

using namespace std;

class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    int area();
    int perimeter() {
        return 2 * (width + height);
    }
};

int Rectangle::area() {
    return width * height;
}

int main() {
    Rectangle rect(5, 10);
    
    cout << "Area of rectangle: " << rect.area() << endl; // Outputs 50
    
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl; // Outputs 30
    
    return 0;
}
