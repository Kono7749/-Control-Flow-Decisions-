#include <stdio.h>

int main(){
    int N;
    int i;

    if (scanf ("%d" , &N) !=1){
        return 1;
    }
    
    for (i = 0; i < N; i++){
        printf("Hello lopp!\n");
    }
}