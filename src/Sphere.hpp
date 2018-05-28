#ifndef SPHERE_H_
#define SPHERE_H_

#include "Vector.hpp"
#include "Color.hpp"

class Sphere {

  public:
    Sphere(Vector *position, float radius, Color *color);
    ~Sphere();
    Vector* Position() const { return position;};
    float Radius() const { return radius;};
    Color* Color() const { return color;};

  private:
    Vector *position;
    float radius;
    Color *color;
};

#endif
