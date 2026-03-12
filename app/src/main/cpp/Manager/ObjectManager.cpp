//
// Created by user on 2026/03/12.
//

#include "ObjectManager.h"


namespace {
    std::vector<BaseObject*> allObjects;
}

namespace ObjectManager {

    void InitManager() {
        allObjects.clear();
    }

    void AddObject(BaseObject* object){
        allObjects.push_back(object);
    }

    void RemoveObject(const BaseObject* object){
        std::vector<BaseObject*>& all = GetAllObjects();
        for (auto it = all.begin(); it != all.end(); ) {
            if ((*it) == object) {
                delete *it;
                it = all.erase(it);
            }
            else {
                it++;
            }
        }
    }

    std::vector<BaseObject*>& GetAllObjects() {
        return allObjects;
    }

}