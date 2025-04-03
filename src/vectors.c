#include <stdlib.h>
#include <math.h>
#include "vectors.h"

vec3* create_vector(int x, int y, int z) {
    vec3 *vector = malloc(sizeof(vec3));
    vector->x = x;
    vector->y = y;
    vector->z = z;
    return vector;
}

void vecadd(vec3* a, vec3*b) {
    a->x += b->x;
    a->y += b->y;
    a->z += b->z;
}

void vecsub(vec3* a, vec3*b) {
    a->x -= b->x;
    a->y -= b->y;
    a->z -= b->z;
}

void vecmult(vec3* a, double scalar) {
    a->x *= scalar;
    a->y *= scalar;
    a->z *= scalar;
}

void vecdiv(vec3* a, double scalar) {
    a->x /= scalar;
    a->y /= scalar;
    a->z /= scalar;
}

double vecdot(vec3 a, vec3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

vec3* cross(vec3 a, vec3 b) {
    return create_vector(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

double veclen(vec3 a) {
    return sqrt(vecdot(a, a));
}

void vecnorm(vec3* a) {
    vecdiv(a, veclen(*a));
}

double vecangle(vec3 a, vec3 b) {
    return acos(vecdot(a, b) / (veclen(a) * veclen(b)));
}