typedef struct matrix {

	float m00, m01;
	float m10, m11;
	
} matrix;

void matrix_set (float radians);

matrix transpose();

2dvector operator_2dvector (2dvector rhs);

matrix operator_matric (matrix rhs);


