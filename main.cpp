
#include "player.hpp"
#include "scene.hpp"
#include <raylib.h>

int main() {
  const int screenWidth = 800;
  const int screenHeight = 400;

  InitWindow(screenWidth, screenHeight, "raylib");
  SetTargetFPS(60);

  Scene scene;

  scene.Add(new Player(&scene, {100, 100}));
  while (!WindowShouldClose()) {
    scene.Tick(0);

    BeginDrawing();
    ClearBackground(BLACK);

    scene.Render();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
