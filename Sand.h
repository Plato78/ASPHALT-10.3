#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct SandLayer {
	sf::Texture texture;
	sf::Sprite sprite;
	float offsetX;
};
void sandlayerInit(SandLayer& slayer, sf::Vector2f pos, std::string fileName, float offset) {
	slayer.texture.loadFromFile(fileName);
	slayer.sprite.setTexture(slayer.texture);
	slayer.sprite.setPosition(pos);
	slayer.offsetX = offset;
}
void Sandillusion(SandLayer& slayer) {
	slayer.sprite.move(0.f, grass_speed);
	if (slayer.sprite.getPosition().y >= height) {
		slayer.sprite.setPosition(slayer.offsetX, -height);
	}
}
void SandLayerDraw(sf::RenderWindow& window, const SandLayer& slayer) {
	window.draw(slayer.sprite);
}

