#ifndef VECTOR_H // protect file from multiple inclusion
#define VECTOR_H

// add prototypes for vector.c

typedef struct Vector;

void SetVector(vector *v, int x, int y, int z); 

void ScalarMultiply(vector *v, int s); // v = v*s

void AddVector(vector *v, vector *u); // add u to v

bool VectorAreEqual(vector *v, vector *u); 

void SubtractVector(vector *v, vector *u); // subtract u from v

#endif
