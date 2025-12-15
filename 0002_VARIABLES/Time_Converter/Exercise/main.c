#include <stdio.h>

int main()
{
    float milliseconds = 0.0F;
    int millToSec = 1000;
    int secToMin = 60;
    int minToHo = 60;
    int hoToDa = 24;

    printf("Please enter a millisecond value: ");
    scanf("%f", &milliseconds);

    float seconds = milliseconds/millToSec;
    float minutes = seconds/secToMin;
    float hours = minutes/minToHo;
    float days = hours/hoToDa;

    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}

#include <stdio.h>

int main()
{


    return 0;
}
