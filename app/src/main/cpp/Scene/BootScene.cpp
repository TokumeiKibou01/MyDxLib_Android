//
// Created by user on 2026/03/12.
//

#include <DxLib.h>
#include "BootScene.h"
#include "../Debug/ImGUI/imgui.h"

void BootScene::Update() {
    sceneCounter_++;
}

void BootScene::Draw() {
    DrawString(0, 0, "Drawing BootScene", GetColor(255, 255, 255));
    DrawFormatString(0, 100, GetColor(255, 255, 255), "Counter: %d", sceneCounter_);

#ifdef DEBUG_MODE
    ImGui::Begin("Debug");
    ImGui::Text("Counter: %d", sceneCounter_);
    ImGui::Text("FPS: %f", ImGui::GetIO().Framerate);
    ImGui::Text("Mouse Position: %f, %f", ImGui::GetMousePos().x, ImGui::GetMousePos().y);
    ImGui::End();
#endif
}

void BootScene::Init() {
    sceneCounter_ = 0;
}

void BootScene::Release() {

}
