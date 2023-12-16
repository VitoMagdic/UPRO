#include <stdio.h>

int main(void){

    int n = 0, i;
    while(n < 5 || n > 10){
        printf("Unesite duljinu polja > ");
        scanf("%d", &n);
    }

    int polje[n];
    for(i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }

    int min = polje[0], max = polje[0], imax = 0, imin = 0;
    for(i = 1; i < n; i++){
        if(min > polje[i]){
            min = polje[i];
            imin = i;
        }
        if(max < polje[i]){
            max = polje[i];
            imax = i;
        }
    }

    polje[imax] = min;
    polje[imin] = max;

    printf("Rezultat:");
    for(i = 0; i < n; i++){
        printf(" %d", polje[i]);
        if(i != n - 1){
            printf(",");
        }
    }

    return 0;
}