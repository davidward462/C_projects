#ifndef VECTOR_H // protect file from multiple inclusion
#define VECTOR_H

// add prototypes for vector.c

struct Vector;

typedef struct Vector vector;

void SetVector(vector *v, int x, int y, int z);

void ZeroVector(vector *v);

void AddVector(vector *v, vector *u, vector *r);

bool VectorAreEqual(vector *v, vector *u);

#endif
