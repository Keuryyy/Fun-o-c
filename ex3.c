#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void num(){

    int numero;
    int fatorial = 1;

    printf("digite um numero para saber seu fatorial:");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        
        fatorial *= i;

    }
    printf("%d", fatorial);

}

int main(){

    num();
}

