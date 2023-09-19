#include <stdio.h>
#include <stdlib.h>

void num(){

    int numero1, numero2;

    printf("digite o um numero inteiro:");
    scanf("%d", &numero1);

    printf("digite outro numero inteiro:");
    scanf("%d", &numero2);

    if(numero1 > numero2){

        printf("o maior numero eh %d", numero1);
    }
    else{

        printf("o maior numero eh %d", numero2);
    }

}
int main(){

    num ();
    
}
