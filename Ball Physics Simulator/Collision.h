#ifndef COLLISION_H
#define COLLISION_H

#include <SFML/Graphics.hpp>
#include "Ball.h"

class Collision {
public:
	Collision();
	~Collision();

	bool ballOverlap(Ball ball, Ball ball2);
	bool ballPointOverlap(sf::Vector2f point, Ball ball);
	float halfOverlap(float p1, float p2, float w1, float w2) const;
	float distanceSquared(sf::Vector2f a, sf::Vector2f b);

};

#endif