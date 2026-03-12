#include <jni.h>
#include <string>
#include <DxLib.h>
#include "Manager/ObjectManager.h"
#include "Manager/SceneManager.h"

int initApp();
void exitApp();

int android_main() {
    if (initApp() == -1) {
        exitApp();
    }

    while (true) {
        ClearDrawScreen();

        SceneManager::UpdateCurrentScene();
        SceneManager::DrawCurrentScene();

        ScreenFlip();
        WaitTimer(16);
        if (ProcessMessage() == -1) {
            break;
        }
    }

    return 0;
}

int initApp() {
    // ＤＸライブラリ初期化処理
    SetGraphMode(1280, 720, 32); //仮の解像度
    SetBackgroundColor(0, 0, 0);

    if (DxLib_Init() == -1) {
        DxLib_End();
        return -1;
    }
    SetDrawScreen(DX_SCREEN_BACK);
    SetAlwaysRunFlag(TRUE);
    SetUseZBuffer3D(TRUE);
    SetWriteZBuffer3D(TRUE);

    int width = 1280, height = 720;
    DxLib::GetAndroidDisplayResolution(&width, &height); //android用の解像度取得関数
    SetGraphMode(width, height, 32);

    // MyDxlibの初期化
    ObjectManager::InitManager();
    SceneManager::InitManager();

    return 0;
}

void exitApp() {
    DxLib_End();
    return;
}