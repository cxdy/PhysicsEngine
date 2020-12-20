#include "2dvector.h"

typedef struct shape {
	
} shape;

typedef struct circle {
	union {
		struct shape s;
	} base;
	
	float radius;
	
} cricle;

typedef struct convex_polygon {
	union {
		struct shape s;
	} base;
	
	int count;
	
	2dvector[] vertices;
	2dvector[] normals;
	
}

void density_circle (body* b);