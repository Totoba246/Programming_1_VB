#include <stdio.h>

int main()
{

      enum lanes{
        LEFT,
        RIGHT,
        CENTER,
        UNKNOWN
    };

    int speed;
    int lane;
    printf("Create the properties of a vehicle.\n");

    printf("Speed in m/s: ");
    scanf("%d", &speed);

    printf("Lane (1-Left, 2-Center, 3-Right): ");
    scanf("%d", &lane);
    switch (lane){
        case  1:{
            lane =  LEFT;
            break;
        }
        case 2:{
            lane = CENTER;
            break;
        }
        case 3:{
            lane = RIGHT;
            break;
        }
        default:{
            printf("No Lane found");
            break;
        }
    }
    

    printf("\n");
    printf("\n");
    printf("\t \t \t \tL\t \t \t \tC\t \t  \t \tR\n");
    printf("\t \t | \t \t \t \t | \t \t \t \t| \t \t  \t \t |\n");

  switch(lane){
    case LEFT:{
        printf("\t \t | \t \tX\t \t | \t \t \t \t| \t \t \t \t |\n");
        break;
    }
    case CENTER:{
        printf("\t \t | \t \t \t \t | \t \tX\t \t| \t \t \t \t |\n");
        break;
    }
    case RIGHT:{
        printf("\t \t | \t \t \t \t | \t \t \t \t| \t \tX\t \t |\n");
        break;
    }
    default:{
         printf("No Lane found");
         break;  
    }
  }
    
  printf("\t \t | \t \t \t \t | \t \t \t \t| \t \t  \t \t |\n");

    return 0;
}
