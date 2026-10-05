clude <iostream>
using namespace std;

class shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class circle : public shape
{
    float r;

public:
    circle(float radius)
    {
        r = radius;
    }

    void area() override
    {
        float area1 = 3.14 * r * r;
        cout << "Area of Circle = " << area1 << endl;
    }
};

class rectangle : public shape
{
    int l, b;

public:
    rectangle(int length, int breadth)
    {
        l = length;
        b = breadth;
    }

    void area() override
    {
        int area2 = l * b;
        cout << "Area of Rectangle = " << area2 << endl;
    }
};

int main()
{
    circle c(10.5);
    rectangle r(2, 5);

    c.area();
    r.area();

    return 0;
}
