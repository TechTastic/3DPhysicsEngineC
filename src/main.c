#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"

// Simulation

// Collision Detection

// Collision Response

int main() {
    printf("Hello World!\n");

    char name[] = "Michael";
    printf("My name is %s\n", name);

    vec3* vectorA = create_vector(2, -4, -1);
    vec3* vectorB = create_vector(0, 5, 2);

    printf("Angle Between A and B: %lf\n", vecangle(*vectorA, *vectorB));

    free(vectorA);
    free(vectorB);

    return 0;
}