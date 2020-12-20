#include "2dvector.h"
#include "matrix.h"
#include "Shape.h"

typedef struct body {
	2dvector position;
	float rotation;
	
	2dvector velocity;
	float angular_velocity;
	
	2dvector force;
	float torque;
	
	float mass;
	float intertia;
	
	float coeff_friction; 
	float coeff_restitution;
	
	Shape shape;
	
} body;


// calculations not taking rotation into account;
2dvector calculate_acceleration (body* b, 2dvector outside_force, float gravity);

void calculate_velocity (body* b, 2dvector acceleration, float dt);

void calculate_position (body* b, float dt);

// calculations taking rotation into account
void calculate_angular_acc (body* b);

void calculate_angular_vel (body* b, float dt);

void calculate_rotation (body* b, float dt);