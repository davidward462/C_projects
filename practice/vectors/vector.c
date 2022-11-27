#include <stdio.h>
#include <stdbool.h>
#include "vector.h"

// Basic vector operations
typedef struct Vector // in 3D space
{
    int x;
    int y;
    int z;
}Vector;

// pass struct by reference
void SetVector(Vector *v, int xIn, int yIn, int zIn)
{
     v->x = xIn;
     v->y = yIn;
     v->z = zIn;
}

void ScalarMultiply(Vector *v, int scalar)
{
    v->x = (v->x * scalar);
    v->y = (v->y * scalar);
    v->z = (v->z * scalar);
}

void AddVector(Vector *v, Vector *u)
{
    v->x = v->x + u->x;
    v->y = v->y + u->y;
    v->z = v->z + u->z;
}

bool VectorAreEqual(Vector *v, Vector *u)
{
    if((v->x == u->x) && (v->y == u->y) && (v->z == u->z))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void SubtractVector(Vector *v, Vector *u)
{
    ScalarMultiply(u, -1);

    v->x = v->x + u->x;
    v->y = v->y + u->y;
    v->z = v->z + u->z;
}

void PrintVector(Vector *v) // pass by reference
{
    printf("[%d %d %d]\n", v->x, v->y, v->z); // use -> instead of . because v is a pointer
}

int main(void)
{
    return 0;
}
