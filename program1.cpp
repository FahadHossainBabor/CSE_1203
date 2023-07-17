#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    void SetRadius(int r)
    {
        radius = r;
    }

    float getArea(){
        float area;
        area=3.1416*radius*radius;
        return area;
    }

    int getRadius(){
        return radius;
    }
};
int main()
{
    // Declaring objects.
    Circle c1, c2, c3;
    // Calling Method from the object
    c1.SetRadius(3);
    c2.SetRadius(4);

    cout<<"Radius of C1= "<<c1.getRadius()<<endl;
    cout<<"Area of C1: "<<c1.getArea()<<endl;

    cout << "End of the program";
}