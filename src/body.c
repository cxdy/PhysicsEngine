#include "Body.h"

2dvector calculate_acceleration (body* b, 2dvector outside_force, float gravity) {
	2dvector acceleration;
	acceleration.x = outside_force.x / b->mass; // no gravity in the x direction
	acceleration.y = outside_force.y / b->mass + gravity;
	return acceleration;
}

void calculate_velocity (body* b, 2dvector acceleration, float dt) {
	b->velocity.x = acceleration.x * dt;
	v->velocity.y = acceleration.y * dt;
}

void calculate_position (body* b, float dt) {
	b->position.x = b->velocity.x * dt;
	b->position.y = b->velocity.y * dt;
}

