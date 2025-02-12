#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include "Scene.h"

class SceneManager {
private:
    IScene* currentScene;

public:
    SceneManager();
    ~SceneManager();

    void ChangeScene(IScene* newScene);
    void Update();
    void Draw();

    // 追加：現在のシーン名を取得
    const char* GetCurrentSceneName() const;
};

#endif