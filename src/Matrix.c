#include <math.h>
#include "matrix.h"
#include "2dvector.h"

void matrix_set (matrix* m, float radians) {
	float c = (float) cos(radians);
	float s = (float) sin(radians);
	
	m->m00 = c;
	m->m01 = (-1)*s;
	m->m10 = s;
	m->m11 = (-1)*c;
	
	
	
}

matrix transpose(matrix m) {
	matrix temp;
	temp.m00 = m.m00;
	temp.m01 = m.10;
	temp.10 = m.01;
	temp.11 = m.11;
	return temp;
}

2dvector operator_2dvector (matrix m, 2dvector rhs) {
	2dvector temp;
	temp.x = m.m00 * rhs.x + m.m01 * rhs.y;
	temp.y = m.m10 * rhs.x + m.m11 * rhs.y;
	return temp;
}

matrix operator_matrix (matrix m, matrix rhs) {
	matrix temp;
	temp.m00 = m.m00 * rhs.m00 + m.m01 * rhs.m10;
	temp.m01 = m.m00 * rhs.m01 + m.m01 * rhs.m11;
	temp.m10 = m.m10 * rhs.m00 + m.m11 * rhs.m10;
	temp.m11 = m.m10 * rhs.m01 + m.m11 * rhs.m11;
	return temp; 
}