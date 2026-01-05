#include <stdio.h>

// Call by Value function
float addValue(float aVal, float bVal){
    return aVal + bVal;
}

// Call by Reference function
void printMemoryAddressAndValue(float *value){
    printf("Adress:\t%p", value);
    printf("\nValue:\t%5.2f", *value);

}


int main()
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("\n\nEnter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}