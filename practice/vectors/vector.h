#ifndef VECTOR_H // protect file from multiple inclusion
#define VECTOR_H

// add prototypes for vector.c

typedef struct Vector{ int x,y,z; }Vector;

void SetVector(Vector *v, int x, int y, int z); 

void ScalarMultiply(Vector *v, int s); // v = v*s

void AddVector(Vector *v, Vector *u); // add u to v

bool VectorAreEqual(Vector *v, Vector *u); 

void SubtractVector(Vector *v, Vector *u); // subtract u from v

void PrintVector(Vector *v);

#endif
