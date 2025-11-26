#include <stdio.h>

int main(){
    int dayCode, hour;
    printf("Enter Day Code (1-7) and Hour (0-23)");

    if (scanf ("%d %d", &dayCode, &hour) != 2){
        printf("Invalid input format.\n");
        return 1;
    }
    if (hour < 0 || hour > 23){
        printf("Error: Hour must be between 0 and 23.\n");
        return 1;
    }
    switch (dayCode)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if (hour >= 8 && hour < 17){
            printf("System Running (Workday)\n");
        }else{
            printf("System Idle (Off-Hours)\n");
        }
        break;
        
    case 6:
    case 7:

        printf("Weekend Realx Mode\n");
        break;
    default:
        printf("Invalid Day Code\n");
        break;
    }
    return 0 ;
}