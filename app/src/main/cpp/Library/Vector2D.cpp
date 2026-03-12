//
// Created by user on 2026/03/12.
//

#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D() {
    x_ = 0.0f;
    y_ = 0.0f;
}

Vector2D::Vector2D(float x, float y) {
    x_ = x;
    y_ = y;
}

float Vector2D::Length() const {
    return sqrt(x_ * x_ + y_ + y_);
}

Vector2D Vector2D::Add(const Vector2D& other) const {
    Vector2D result;
    result.x_ = x_ + other.x_;
    result.y_ = y_ + other.y_;
    return result;
}

Vector2D Vector2D::Subtract(const Vector2D& other) const {
    Vector2D result;
    result.x_ = x_ - other.x_;
    result.y_ = y_ - other.y_;
    return result;
}

Vector2D Vector2D::Dot(const Vector2D& other) const {
    Vector2D result;
    result.x_ = x_ * other.x_;
    result.y_ = y_ * other.y_;
    return result;
}

Vector2D Vector2D::Cross(const Vector2D& other) const {
    Vector2D result;
    result.x_ = x_ * other.y_;
    result.y_ = y_ * other.x_;
    return result;
}

Vector2D Vector2D::Normalize() const {
    float len = Length();
    float resultX = len == 0 ? 0 : x_ / len;
    float resultY = len == 0 ? 0 : y_ / len;
    return {resultX, resultY};
}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Add(other);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return Subtract(other);
}