#pragma once
#include <Windows.h>
#include <unordered_map>

class InputManager {
public:
    static InputManager& GetInstance();

    void Update();
    bool IsKeyPressed(int key);

private:
    InputManager() = default;
    ~InputManager() = default;
    InputManager(const InputManager&) = delete;
    InputManager& operator=(const InputManager&) = delete;

    std::unordered_map<int, bool> keyState;
};