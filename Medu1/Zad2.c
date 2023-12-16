#include <stdio.h>

int main(void){

    int n, z = 0;
    printf("Unesite prirodni broj > ");
    scanf("%d", &n);

    printf("Rezultat:");
    while(z < 3){
        printf(" %d", n);

        if(n == 1){
            z++;
        }

        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        
        if(z < 3){
            printf(",");
        }
    }



    return 0;
}