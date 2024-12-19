#pragma once

#include <vector>

	class GameObject;

	class Scene{
	private:
	std::vector<GameObject*>mGameObject;

		public: 
			void Tick(float deltaTime);
			void Render();

			void Add(GameObject* go);
	};
