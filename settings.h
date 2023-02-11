#pragma once
#include <SFML/Graphics.hpp>

const float width = 800.f;
const float height = 1000.f;
const std::string WINDOW_TITLE = "ASPHALT 10";
const float FPS = 60.f;
const float grass_speed = 2.f;
const float left_roadside = 100.f;
const float right_roadside = 500.f;
const float car_width = 80.f;
const float car_height = 152.f;
const sf::Vector2f car_start_pos{(600 -car_width)/2.f, height - car_height - 10.f };
const float car_speed = 5.f;
