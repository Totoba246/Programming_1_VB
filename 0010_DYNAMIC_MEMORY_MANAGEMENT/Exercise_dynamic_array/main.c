#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    if(n<1)
    {
        printf("\nInvalid input! The number of elements must be greater than zero.");
        return 1;
    }

    int *heapArray = malloc((size_t)n *  sizeof(int));

    //überprüfen ob Memory allocation erfolgreich war
    if(!heapArray)
    {
            printf("\nMemory allocation failed!");
            return 1;
        }

    printf("\nEnter %d integers: ", n);

    //werte in Array schreiben
    for(int  i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        heapArray[i] = a;
    }

    //Quersumme bilden
    int sum = 0;
    for(int  i = 0; i < n; i++)
    {
        sum += heapArray[i];
    }
    free(heapArray);
    printf("\nThe sum of the Array elements is: %d", sum);
    return 0;
}
