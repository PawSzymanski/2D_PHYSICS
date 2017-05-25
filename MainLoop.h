#pragma once

#include <iostream>
#include <entityx\entityx.h>
#include <SFML\Graphics.hpp>

#include "systems\CollisionSystem.h"
#include "systems\MovementSystem.h"
#include "systems\RenderSystem.h"
#include "systems\MouseDragSystem.h"
#include "systems\ForcesSystem.h"

class MainLoop
{
	sf::RenderWindow window;
	sf::View camera;
	entityx::EntityX ex;

public:
	
	MainLoop();
	~MainLoop();

	void setSystems();
	void update(float);
	void loop();
	void render();

private:
	void createCircle(sf::Vector2f pos, sf::Vector2f vel, float r, sf::Color col);
	
};

