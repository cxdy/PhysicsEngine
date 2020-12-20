// includes
#include <stdio.h>
#include <stdlib.h>
#include "2DVector.h"
#include "cmath.h"

// length = x^2+y^2
// square roots are expensive
float vector_length (2dvector vector) {
	float x = sqrt(vector.x);
	float y = sqrt(vector.y);
	return (x + y);
}

// normal = vector * 1 / (vector length)
float normalize_vector (2dvector vector) {
	2dvector temp;
	float length = vector_length(vector);
	temp.x = vector.x * (1/length);
	temp.y = vector.x * (1/length);
	return temp;
}

// c * <a,b> = <c*a, c*b>
2dvector vector_scalar_mult (float scalar, 2dvector vector) {
	2dvector temp;
	temp.x = scalar * vector.x;
	temp.y = scalar * vector .y;
	return temp;
}

// cross of two vectors is a.x*b.x - a.y*b.y
// 
float cross_vectors (2d vector a, 2d vector b) {
	float x = a.x * b.x;
	float y = a.y * b.y;
	return (x - y);
}

// dot product = a.x*b.x+a.y*b.y
float vectors_dot_product (2dvector a, 2dvector b) {
	float x = a.x * b.x;
	float y = a.y * b.y;
	return (x + y);
}

2dvector cross_scalar_first (2dvector a, float s) {
	2dvector temp;
	temp.y = (-1)*s*(a.x);
	temp.x = (1)*(a.y);
	return temp;
}

2dvector cross_scalar_last (float s, 2dvector a) {
	2dvector temp;
	temp.x = (-1)*s*(a.y);
	temp.y = (1)*s*(a.x);
	return temp;
}


