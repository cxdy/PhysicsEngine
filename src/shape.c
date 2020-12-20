#include "Shape.h"
#include "Body.h"
#include "cmath.h"

void density_circle (body* b float denisty) {
	b->mass = density * PI * sqrt(b->shape.radius);
}