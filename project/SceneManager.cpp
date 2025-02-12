#include "SceneManager.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

SceneManager::SceneManager() {
    currentScene = new TitleScene();
}

SceneManager::~SceneManager() {
    delete currentScene;
}

void SceneManager::ChangeScene(IScene* newScene) {
    delete currentScene;
    currentScene = newScene;
}

void SceneManager::Update() {
    if (currentScene) {
        currentScene->Update(*this);
    }
}

void SceneManager::Draw() {
    if (currentScene) {
        currentScene->Draw();
    }
}

// 追加：現在のシーン名を返す
const char* SceneManager::GetCurrentSceneName() const {
    if (dynamic_cast<TitleScene*>(currentScene)) {
        return "Title Scene";
    }
    if (dynamic_cast<StageScene*>(currentScene)) {
        return "Stage Scene";
    }
    if (dynamic_cast<ClearScene*>(currentScene)) {
        return "Clear Scene";
    }
    return "Unknown Scene";
}