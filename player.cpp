#include "player.hpp"

Player::Player(Scene* scene, v2 startingPosition): GameObject(scene, startingPosition) {mTexture = LoadTexture("ship.png");

}

void Player::Tick(float deltaTime){
	
}



void Player::Render(){
	Rectangle source = {};
	source.x = 0;
	source.y = 0;
	source.width = 16;
	source.height = 16;

	Rectangle destination = {};
	destination.x = mPosition.x;
	destination.y = mPosition.y;
	destination.width = 65;
	destination.height = 64;

	DrawTexturePro(mTexture, source, destination, {0,0}, 0, WHITE);
}
