#include <stdio.h>

int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;

    printf("Enter Zone Code (1-3) and Weight (kg): ");
    if (scanf ("%d %f", &zoneCode, &weight_kg) != 2){
        printf ("Invalid input format.\n");
        return 1;
    }
    switch (zoneCode)
    {
    case 1:
        if (weight_kg <= 5.0){
            totalCost = 50.0;
        } else {
            totalCost = 80.0;
        }
        break;
    case 2:
        if (weight_kg <= 10.0){
            totalCost = 150.0;
        } else {
            totalCost = 250.0;
        }
        break;
    case 3:
        totalCost = 500.0;
        break;
    default:
        printf("Invalid Zone Code \n");
        return 0;
    }
    if  (totalCost > 0.0 && zoneCode >= 1 && zoneCode <= 3){
        printf("Total Cost: %.2f \n", totalCost);
    }
    return 0;
    }
