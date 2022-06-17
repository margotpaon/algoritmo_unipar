#include <stdio.h>

int main(void){
    int contador = 0;
    int somatorio = 0;
    while (contador <=20){
        somatorio = somatorio + contador;
        contador++;
    }
    printf("O somatorio dos 20 primeiros numeros é %i", somatorio);
}