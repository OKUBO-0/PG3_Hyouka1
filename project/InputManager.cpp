#include "InputManager.h"

InputManager& InputManager::GetInstance() {
    static InputManager instance;
    return instance;
}

void InputManager::Update() {
    for (auto& key : keyState) {
        key.second = (GetAsyncKeyState(key.first) & 0x8000) != 0;
    }
}

bool InputManager::IsKeyPressed(int key) {
    return (GetAsyncKeyState(key) & 0x8000) != 0;
}