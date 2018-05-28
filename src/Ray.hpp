#ifndef RAY_H_
#define RAY_H_

#include "Vector.hpp"
#include "Sphere.hpp"

class Ray {

  public:
    Ray(Vector *position, Vector *direction);
    ~Ray();
    Vector* Position() const { return position;};
    Vector* Direction() const { return direction;};
    
    bool Intersects(Sphere *S);

  private:
    Vector *position;
    Vector *direction;
};

#endif
