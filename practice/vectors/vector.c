#include <stdio.h>
#include <stdbool.h>

// Basic vector operations

struct Vector // in 3D space
{
    int x;
    int y;
    int z;
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

void ZeroVector(vector *v)
{
    SetVector(v, 0, 0, 0);
}

void AddVector(vector *v, vector *u, vector *r)
{
    r->x = v->x + u->x;
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

void PrintVector(vector *v) // pass by reference
{
    printf("[%d %d %d]\n", v->x, v->y, v->z); // use -> instead of . because v is a pointer
}

int main(void)
{

    // begin testing
    vector v;
    vector *vp = &v; // variable vp holds the address to the vector v
    
    SetVector(vp, 0, 0, 0);
    PrintVector(vp);

    // end testing

    return 0;
}
