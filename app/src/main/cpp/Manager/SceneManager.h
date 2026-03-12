//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_SCENEMANAGER_H
#define MYDXLIB_ANDROID_SCENEMANAGER_H

#include <string>

namespace {}

namespace SceneManager {

    void InitManager();
    void ChangeScene(const std::string& sceneName);

    void UpdateCurrentScene();
    void DrawCurrentScene();
    void InitCurrentScene();
    void ReleaseCurrentScene();
}

#endif //MYDXLIB_ANDROID_SCENEMANAGER_H
