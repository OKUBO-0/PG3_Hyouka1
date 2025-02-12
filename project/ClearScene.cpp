#include "ClearScene.h"
#include "TitleScene.h"
#include "SceneManager.h"
#include <iostream>

void ClearScene::Update(SceneManager& sceneManager) {
    if (InputManager::GetInstance().IsKeyPressed(VK_LEFT)) {
        sceneManager.ChangeScene(new TitleScene());
    }
}

void ClearScene::Draw() {
    std::cout << "Clear Scene" << std::endl;
}