//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_BASE2DOBJECT_H
#define MYDXLIB_ANDROID_BASE2DOBJECT_H

#include "BaseObject.h"
#include "../Library/Location2D.h"
#include "../Library/Vector2D.h"

class Base2DObject : public BaseObject {
protected:
    Location2D location_;
    Vector2D vector_;
public:
    Base2DObject(const std::string& name, const Location2D& location, const Vector2D& vector, const bool& isAlive)
        : BaseObject(name, isAlive){
        location_ = location;
        vector_ = vector;
    };
    ~Base2DObject() override = default;

    Location2D GetLocation() { return location_; };
    void SetLocation(const Location2D& loc) { location_ = loc; };
    Vector2D GetVector() { return vector_;  };
    void SetVector(const Vector2D& vec) { vector_ = vec; };
};

#endif //MYDXLIB_ANDROID_BASE2DOBJECT_H
