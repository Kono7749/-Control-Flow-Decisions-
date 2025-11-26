#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;

    printf("Enter Plan Code and Data Usage: ");
    if(scanf("%d %f", &planCode, &dataUsage_GB) != 2){
        printf("Invalid input format\n");
        return 1;
    }
    switch (planCode)
    {
    case 1:
        if (dataUsage_GB <= 10.0){
            totalBill = 299.0;
        }else{
            totalBill = 299.0 + 10.0 * (dataUsage_GB - 10.0);
        }
        break;
    
    case 2:
        if (dataUsage_GB <= 20.0){
            totalBill = 599.0;
        }else{
            totalBill = 599.0 + 5.0 * (dataUsage_GB - 20.0);
        }
        break;
    default:
        printf("Invalid Plan Code\n");
        return 0;
    }
        printf("Total Bill: %.2f\n", totalBill);
        return 0;
    }
