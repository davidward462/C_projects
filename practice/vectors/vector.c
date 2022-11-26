#include <stdio.h>
#include <stdbool.h>
#include "vector.h"

// Basic vector operations
struct Vector // in 3D space
{
    int x, y, z;
};

// to avoid constantly writing 'struct'
typedef struct Vector vector;

// pass struct by reference
void SetVector(vector *v, int xIn, int yIn, int zIn)
{
     v->x = xIn;
     v->y = yIn;
     v->z = zIn;
}

void ScalarMultiply(vector *v, int scalar)
{
    v->x = (v->x * scalar);
    v->y = (v->y * scalar);
    v->z = (v->z * scalar);
}

void AddVector(vector *v, vector *u)
{
    v->x = v->x + u->x;
    v->y = v->y + u->y;
    v->z = v->z + u->z;
}

bool VectorAreEqual(vector *v, vector *u)
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

void SubtractVector(vector *v, vector *u)
{
    ScalarMultiply(u, -1);

    v->x = v->x + u->x;
    v->y = v->y + u->y;
    v->z = v->z + u->z;
}

void PrintVector(vector *v) // pass by reference
{
    printf("[%d %d %d]\n", v->x, v->y, v->z); // use -> instead of . because v is a pointer
}

int main(void)
{
    struct vector a = {0,0,0};
    return 0;
}
