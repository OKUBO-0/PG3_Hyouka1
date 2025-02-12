#include "StageScene.h"
#include "ClearScene.h"
#include "SceneManager.h"
#include <iostream>

void StageScene::Update(SceneManager& sceneManager) {
    if (InputManager::GetInstance().IsKeyPressed(VK_RIGHT)) {
        sceneManager.ChangeScene(new ClearScene());
    }
}

void StageScene::Draw() {
    std::cout << "Stage Scene" << std::endl;
}