#include "WorldRenderer.h"

WorldRenderer::WorldRenderer(World& world) : world(world) {}

WorldRenderer::~WorldRenderer() {}

void WorldRenderer::render(sf::RenderWindow& window) const {
	renderBalls(window);
}

void WorldRenderer::renderBalls(sf::RenderWindow& window) const {
	for (Ball ball : world.getBalls()) {
		ball.draw(window);
	}
}
