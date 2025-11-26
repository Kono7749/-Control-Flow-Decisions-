#include <stdio.h>

int main() {
    int number;
    int check;
    do {
        printf("Enter a number (1-10): ");
        check = scanf("%d," &number);
        if (check != 1 || number 1 || number > 10) {
            prinf ("Error: Value must be 1-10.\n")
            if (check != 1){
                while (getchar() != '\n')         
            }
        }
    }while (check != 1 || number < 1 || number > 10);
    printf("Input accepted: %d\n", number);

    return 0;
}