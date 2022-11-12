#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
    int x,y;
    void display()
    {
    }
    void read_input()
    {
        cout << x << " " << y << endl;
    }
    
};
class RectangleArea: public Rectangle{
    public:
    RectangleArea()
    {
        cin >> x >> y;
    }
    void display()
    {
        cout << x*y;
    }
    
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}