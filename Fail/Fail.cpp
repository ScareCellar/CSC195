#include <iostream>
#include <vector>
#include "Shapes.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;



float Circle::Area() { return 3.14f * m_radius * m_radius; }
void Circle::SetRadius(float radius) { m_radius = radius; }
float Circle::GetRadius() { return m_radius; }


float Rectangle::Area() { return m_width * m_height; }

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        //prints out circle radius if shape is a circle
        if (typeid(*shapes[i]) == typeid(Circle)) {
            
            cout << "Radius: " << dynamic_cast<Circle*>(shapes[i])->GetRadius() << endl;
        }
    }

    
    for (int i = 0; i < shapes.size(); i++) {
        delete shapes[i];
    }

    return 0;
}
