//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_VECTOR2D_H
#define MYDXLIB_ANDROID_VECTOR2D_H


class Vector2D {
private:
public:
    float x_;
    float y_;

    Vector2D();
    Vector2D(float x, float y);

    float Length() const;

    Vector2D Add(const Vector2D& other) const;
    Vector2D Subtract(const Vector2D& other) const;
    Vector2D Dot(const Vector2D& other) const;
    Vector2D Cross(const Vector2D& other) const;
    Vector2D Normalize() const;

    /// <summary>
    /// 加算する関数（Addと同じ）
    /// </summary>
    /// <param name="other"></param>
    /// <returns></returns>
    Vector2D operator+(const Vector2D& other) const;

    /// <summary>
    /// 減算する関数（Subtractと同じ）
    /// </summary>
    /// <param name="other"></param>
    /// <returns></returns>
    Vector2D operator-(const Vector2D& other) const;
};


#endif //MYDXLIB_ANDROID_VECTOR2D_H
