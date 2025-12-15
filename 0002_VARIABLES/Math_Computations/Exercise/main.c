#include <stdio.h>

float aufgabe1(float x, float y);
float aufgabe2(float x, float y);
float aufgabe3(float x, float y);

int main()
{
    //definition

    float z_1 = aufgabe1(-2.0,-3.0);
    float z_2 = aufgabe2(-2.0,-3.0);
    float z_3 = aufgabe3(-2.0,-3.0);

    //output

    printf("Aufgabe 1: %f \n", z_1);
    printf("Aufgabe 2: %f \n", z_2);
    printf("Aufgabe 3: %f \n", z_3);
    return 0;
}

float aufgabe1 (float x, float y){
    float z;
    z= ((x*x) + (y*y)) -(x*y) + 2;
    return z;
}

float aufgabe2 (float x, float y){
    int z;
    z= (x-y)*(x-y)*(x-y)-3;
    return z;
}

float aufgabe3 (float x, float y){
    float z;
    int zaeheler = (2*(x*x*x))- 0.5*(x*x)-x+4;
    z= zaeheler/y;
    return z;
}






















