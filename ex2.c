#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void num(){

    int numero;

    printf("digite um numero para saber sua raiz:");
    scanf("%d", &numero);

    float raiz = sqrt(numero);

    printf("A raiz eh: %.1f", raiz);
    
}

int main(){

    num();
}
