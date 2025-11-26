#include <stdio.h>
#include <stdbool.h>

int main() {
    int clearanceLevel;
    int age;
    int isActive;

    printf("Enter Clearance Level, Age, and IsAcrive (1/0): ");
    if (scanf("%d %d %d", &clearanceLevel, &age, &isActive) != 3){
        printf("Invalid input format.\n");
        return 1;
    }
    if (
        (clearanceLevel == 3 && isActive == 1) ||
        (clearanceLevel == 2 && age >= 25 && isActive == 1)
){
    printf("Access Granted\n");
} else {
    printf("Access Denied\n");
}
return 0;
}