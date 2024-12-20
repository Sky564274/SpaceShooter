#pragma once
#include <raylib.h>

#include "game_object.hpp"

class Player : public GameObject {
private:
  Texture2D mTexture;
  float mSpeed;

public:
  Player(Scene *scene, v2 startingPosition);

  virtual void Tick(float deltaTime) override;
  virtual void Render() override;
};
