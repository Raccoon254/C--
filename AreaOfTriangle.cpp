#include <iostream>
using namespace std;

class Triangle
{
public:
    int area()
    {
        int base = 3;
        int height = 4;
        int hyp = 5;
        return 0.5 * base * height;
    }
    int perimeter()
    {
        int base = 3;
        int height = 4;
        int hyp = 5;
        return base + height + hyp;
    }
};

int main()
{
    Triangle triangle;
    cout << "Area is" << triangle.area() << "Perimeter is::" << triangle.perimeter();
    return 0;
}
