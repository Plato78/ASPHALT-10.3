#pragma once
#include "settings.h"
struct Car {
	sf::Texture texture;
	sf::Sprite sprite;
	float speedx;
};
void carInit(Car& car, sf::Vector2f pos, std::string fileName) {
	car.texture.loadFromFile(fileName);
	car.sprite.setTexture(car.texture);
	car.sprite.setPosition(pos);
}
void CarDrive(Car& car) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			car.speedx = -car_speed;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			car.speedx = car_speed;
		car.sprite.move(car.speedx, 0.f);
		car.speedx = 0.f;
		float carx = car.sprite.getPosition().x;
		float cary =car.sprite.getPosition().y;
		if (carx <= left_roadside) car.sprite.setPosition(left_roadside, cary);
		if (carx >= right_roadside - car_width)
			car.sprite.setPosition(right_roadside - car_width, cary);
}
void CarDraw(sf::RenderWindow& window, const Car& car) {
	window.draw(car.sprite);

}