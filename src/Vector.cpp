#include "Vector.hpp"

Vector::Vector(float x, float y, float z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

Vector::Vector(const Vector& v) {
  this->x = v.x;
  this->y = v.y;
  this->z = v.z;
}

Vector Vector::operator+(const Vector& v) const {
  Vector u;

  u.x = this->x + v.x;
  u.y = this->y + v.y;
  u.z = this->z + v.z;

  return u;
}

Vector Vector::operator-(const Vector& v) const {
  Vector u;

  u.x = this->x - v.x;
  u.y = this->y - v.y;
  u.z = this->z - v.z;

  return u;
}

// Cross product
Vector Vector::operator^(const Vector& v) const {
  Vector u;

  u.x = this->y * v.z - this->z * v.y;
  u.y = this->z * v.x - this->x * v.z;
  u.z = this->x * v.y - this->y * v.x;

  return u;
}

Vector Vector::operator*(const float f) const {
  Vector u;

  u.x = this->x * f;
  u.y = this->y * f;
  u.z = this->z * f;

  return u;
}

Vector Vector::operator/(const float f) const {
  Vector u;

  u.x = this->x / f;
  u.y = this->y / f;
  u.z = this->z / f;

  return u;
}

float Vector::operator*(const Vector& v) const {
  float u;

  u = this->x * v.x  + this->y * v.y + this->z * v.z;

  return u;
}

float Vector::Magnitude() const{
  return sqrtf(this->x*this->x + this->y*this->y + this->z*this->z);
}

void Vector::Normalize() {
  float mag = this->Magnitude();
  x /= mag;
  y /= mag;
  z /= mag;
}
