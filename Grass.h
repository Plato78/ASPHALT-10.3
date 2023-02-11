#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct GrassLayer {
	sf::Texture texture;
	sf::Sprite sprite;
	float offsetX;
};
void grasslayerInit(GrassLayer& glayer, sf::Vector2f pos, std::string fileName, float offset) {
	glayer.texture.loadFromFile(fileName);
	glayer.sprite.setTexture(glayer.texture);
	glayer.sprite.setPosition(pos);
	glayer.offsetX = offset;
}
void Grassillusion(GrassLayer& glayer) {
	glayer.sprite.move(0.f, grass_speed);
	if (glayer.sprite.getPosition().y >= height) {
		glayer.sprite.setPosition(glayer.offsetX, -height);
	}
	}
	void grassLayerDraw(sf::RenderWindow & window, const GrassLayer & glayer) {
		window.draw(glayer.sprite);
	}