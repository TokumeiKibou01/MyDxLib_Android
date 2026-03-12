//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_BASESCENE_H
#define MYDXLIB_ANDROID_BASESCENE_H

#include <string>

class BaseScene {
private:
    std::string sceneName_;
protected:
    int sceneCounter_;
public:

    BaseScene(const std::string& sceneName) {
        sceneName_ = sceneName;
        sceneCounter_ = 0;
    }

    virtual void Update() = 0;
    virtual void Draw() = 0;
    virtual void Init() = 0;
    virtual void Release() = 0;

    std::string GetName() const {
        return sceneName_;
    }
};

#endif //MYDXLIB_ANDROID_BASESCENE_H
