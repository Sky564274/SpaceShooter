#include "scene.hpp"

#include "game_object.hpp"


void Scene::Tick(float deltaTime) {
	for (auto& go : mGameObject) {
		go->Tick(deltaTime);
	}
}

void Scene::Render(){
	for (auto& go : mGameObject){
		go->Render();

	}
}



void Scene::Add(GameObject* go){
	mGameObject.push_back(go);
}
