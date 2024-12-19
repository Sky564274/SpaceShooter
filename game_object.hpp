#pragma once

#include "scene.hpp"
#include "math.hpp"

class GameObject {
	public:
	Scene* mScene;
	v2 mPosition;

	GameObject(Scene* scene, v2 startingPosition);

	virtual void Tick(float deltaTime) = 0;
	virtual void Render() = 0;
};
