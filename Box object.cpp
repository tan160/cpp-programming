#include <iostream>
using namespace std;

class box
{
    int length;
    int breadth;
    int height;

public:
    box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }

    box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }


    box(const box &b)
    {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }

    void volume()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Height = " << height << endl;
        cout << "Volume = " << length * breadth * height << endl;
    }
    
};

int main()
{
    box b1;

    cout << "Default:" << endl;
    b1.volume();

    box b2(10, 5, 4);

    cout << "\nParameterized:" << endl;
    b2.volume();

    box b3(b2);

    cout << "\nCopy:" << endl;
    b3.volume();

    return 0;
}
