#include <stdio.h>

int main()
{
    int aVal = 42;
    int *myPtr = &aVal;

    printf("Initial Value: \t\t\t\t\t %d", aVal);
    printf("\nValue trough Pointer: \t\t\t\t %d", *myPtr);

    *myPtr = 20;
    printf("\nModified value of aValue through myPointer: \t %d", *myPtr);

    int *yourPtr = myPtr;

    printf("\n");

    printf("\nAdress of aValue:\t\t\t\t %p", &aVal);
    printf("\nAdress of myPointer:\t\t\t\t %p", &myPtr);
    printf("\nAdress of yourPointer:\t\t\t\t %p", &yourPtr);

    return 0;
}