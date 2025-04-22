#pragma once
#include "Shapes.h"

class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }
    ~Circle() {}

    float Area() override;

    void SetRadius(float radius);
    float GetRadius();

protected:
    float m_radius;
};