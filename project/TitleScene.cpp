#include "TitleScene.h"
#include "StageScene.h"
#include "SceneManager.h"
#include <iostream>

void TitleScene::Update(SceneManager& sceneManager) {
    if (InputManager::GetInstance().IsKeyPressed(VK_DOWN)) {
        sceneManager.ChangeScene(new StageScene());
    }
}

void TitleScene::Draw() {
    std::cout << "Title Scene" << std::endl;
}