#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct RoadLayer {
	sf::Texture texture;
	sf::Sprite sprite;
	float offsetX;
};
void roadlayerInit(RoadLayer& layer, sf::Vector2f pos, std::string fileName, float offset) {
	layer.texture.loadFromFile(fileName);
	layer.sprite.setTexture(layer.texture);
	layer.sprite.setPosition(pos);
	layer.offsetX = offset;
}
void Roadillusion(RoadLayer& layer) {
	layer.sprite.move(0.f, grass_speed);
	if (layer.sprite.getPosition().y >= height) {
		layer.sprite.setPosition(layer.offsetX, -height);
	}
}
void roadLayerDraw(sf::RenderWindow& window, const RoadLayer& layer) {
	window.draw(layer.sprite);
}