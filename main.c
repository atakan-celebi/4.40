#include <stdio.h>

int main(void) {
    int base, altezza,i,k,j;
    printf("inserisci la base del quadilatero:");
    scanf("%d", &base);
    printf("iniserisci l'altezza del quadilatero:");
    scanf("%d",&altezza);
    for (i=0;i<base;i++) {
        printf("*");
    }
    for (k=0;k<altezza-2;k++) {
        printf("\n");
        printf("*");
        for (j=0;j<base-2; j++) {
            printf(" ");
        } printf("*");
    } printf("\n");
    for (i=0;i<base;i++) {
        printf("*");
    }
}
