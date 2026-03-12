//
// Created by user on 2026/03/12.
//

#include <DxLib.h>
#include "BootScene.h"

void BootScene::Update() {
    sceneCounter_++;
}

void BootScene::Draw() {
    DrawString(0, 0, "Drawing BootScene", GetColor(255, 255, 255));
    DrawFormatString(0, 100, GetColor(255, 255, 255), "Counter: %d", sceneCounter_);
}

void BootScene::Init() {
    sceneCounter_ = 0;
}

void BootScene::Release() {

}
