#include <stdio.h>
#include <stdbool.h>


#define PI_Value 3.1415926
int main()
{
    // declaration and definition
    int aValue = true;
    int bValue = 2;
    const float cValueConst= 42.42f;
    int unsigned dValue = 4u;

    //computation
    
    
    //outputs
    printf("\t Hello World!\n");
    printf("This is my First float value: %f \n", cValueConst);
    printf("This is my First String: %s \n", "String");
    printf("This is my First Pi: %f \n", PI_Value);
    printf("This is funny because it is %s \n", aValue ? "true" : "false");
   

    return 0;
}