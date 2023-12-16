#include <stdio.h>
#define MAX 10

int main(void){

    char niz[MAX + 1];
    printf("Unesite niz znakova > ");
    fgets(niz, MAX + 1, stdin);

    int i;

    printf("Rezultat: ");

    if(niz[0] >= 'a' && niz[0] <= 'z'){
        niz[0] = niz[0] - 32;
        printf("%c", niz[0]);
    }else{
        printf("%c", niz[0]);
    }

    for(i = 1; niz[i] != '\0'; i++){
        if(niz[i-1] == ' ' || niz[i+1] == ' ' || niz[i+1] == '\0' || niz[i+1] == '\n'){
            if(niz[i] >= 'a' && niz[i] <= 'z'){
                niz[i] = niz[i] - 32;    
            }
        }
        if(niz[i] == '\n'){
            niz[i] = '\0';
            continue;
        }
        printf("%c", niz[i]);
    }




    return 0;
}