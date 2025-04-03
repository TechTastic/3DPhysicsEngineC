#pragma once

typedef struct Vector3 {
    double x;
    double y;
    double z;
} vec3;

vec3* create_vector(int x, int y, int z);

void vecadd(vec3* a, vec3* b);

void vecsub(vec3* a, vec3* b);

void vecmult(vec3* a, double scalar);

void vecdiv(vec3* a, double scalar);

double vecdot(vec3 a, vec3 b);

vec3* cross(vec3 a, vec3 b);

double veclen(vec3 a);

double vecangle(vec3 a, vec3 b);