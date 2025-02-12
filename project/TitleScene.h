#pragma once
#include "Scene.h"
#include "InputManager.h"

class TitleScene : public IScene {
public:
    void Update(SceneManager& sceneManager) override;
    void Draw() override;
};