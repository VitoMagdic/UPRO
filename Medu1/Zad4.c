#include <stdio.h>

int main(void){

    int m = 0, n = 0, i, j;
    while(m <= 0){
        printf("Unesite m > ");
        scanf("%d", &m);
    }
    while(n <= 0){
        printf("Unesite n > ");
        scanf("%d", &n);
    }

    int polje[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &polje[i][j]);
        }
    }

    printf("Rezultat:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(polje[i][j] >= 0 && i % 2 == 1){
                printf("  1");
            }
            else if(polje[i][j] >= 0 && i % 2 == 0){
                printf("  0");
            }
            else{
                if(m == 1){
                    printf("%d", polje[i][j]);
                }
                else{
                    printf(" %d", polje[i][j]);
                }
            }
        }
        if(i == m - 1){
            continue;
        }
        printf("\n");
    }


    return 0;
}