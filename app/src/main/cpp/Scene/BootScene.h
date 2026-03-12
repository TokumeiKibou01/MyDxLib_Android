//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_BOOTSCENE_H
#define MYDXLIB_ANDROID_BOOTSCENE_H

#include "BaseScene.h"

class BootScene : public BaseScene {
private:
public:
    BootScene()
        : BaseScene("BootScene"){
    }

    void Update() override;
    void Draw() override;
    void Init() override;
    void Release() override;
};


#endif //MYDXLIB_ANDROID_BOOTSCENE_H
