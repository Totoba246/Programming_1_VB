#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("\nAdress of length:  %p", (void*)&length);

    printf("\nSizeof(int):  %lu", (sizeof(int)));
    printf("\nmemoryReq:  %zu", memoryReq);

    int *heapArray = malloc(memoryReq);
    //überprüfen ob malloc NULL zurückgibt (dann haben wir keinen Speicher gekriegt)

    for (size_t i = 0;i < length; i++)
    {
        heapArray[i] = (int)i*100;
    }
    for (size_t i = 0;i < length; i++)
    {
        printf("\nheapArray[%lu]: %d", i , heapArray[i]);
        printf("\nadress of heapArray[%lu]: %p", i , (void*)&heapArray[i]);
    }


    free(heapArray);
    //inf. Time to run -> Dangling Pointer, also
    heapArray = NULL; //alternativ (void*)0

    return 0;
}