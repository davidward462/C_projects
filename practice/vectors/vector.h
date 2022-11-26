#ifndef VECTOR_H // protect file from multiple inclusion
#define VECTOR_H

// add prototypes for vector.c

struct Vector;

typedef struct Vector vector;

void SetVector(vector *v, int x, int y, int z);

void ZeroVector(vector *v); 

void ScalarMultiply(vector *v, int s); // v = v*s

void AddVector(vector *v, vector *u, vector *r); // v + u = r

bool VectorAreEqual(vector *v, vector *u); 

void SubtractVector(vector *v, vector *u, vector *r); // v - u = r

#endif
