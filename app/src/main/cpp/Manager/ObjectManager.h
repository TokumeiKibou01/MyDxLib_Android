//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_OBJECTMANAGER_H
#define MYDXLIB_ANDROID_OBJECTMANAGER_H

#include "../Object/BaseObject.h"
#include <vector>

namespace ObjectManager {

    static void InitManager();
    static void AddObject(BaseObject* object);
    static void RemoveObject(BaseObject* object);
    static std::vector<BaseObject*>& GetAllObjects();

    template<class C> static C* GetDrawObject() {
        for (BaseObject* obj : GetAllObjects()) {
            if (obj == nullptr) continue;
            C* instance = dynamic_cast<C*>(obj);
            if (instance != nullptr) {
                return instance;
            }
        }
        return nullptr;
    }
}


#endif //MYDXLIB_ANDROID_OBJECTMANAGER_H