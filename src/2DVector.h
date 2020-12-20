// data structures

typedef struct 2dvector {
	float x;
	float y;
} 2dvector;

// functions


// length = sqrt(x^2 + y^2)
float vector_length (2dvector vector);

// unit vector = vector * 1 / (vector length)
float unit_vector (2dvector vector);

// c * <a,b> = <c*a, c*b>
2dvector vector_scalar_mult (float scalar, 2dvector vector);

// cross of two vectors is a.x*b.x - a.y*b.y
// 
float cross_vectors (2d vector a, 2d vector b);

// dot product = a.x*b.x+a.y*b.y
float vectors_dot_product (2dvector a, 2dvector b);

