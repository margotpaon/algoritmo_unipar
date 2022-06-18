#include<stdio.h>
#define SIZE 10
int main(void){
    int array[SIZE], i, maior, menor, posMaior, posMenor;
    
    //popular array
    for(i = 0; i < SIZE; i++){
        printf("Digite o termo numero %i \n", i+1);
        scanf("%i", &array[i]);
    }

    //Encontre o maior valor e sua posição
    maior = array[0];
    posMaior = 0;
    for(i = 1; i < SIZE; i++){
        if(array[i]> maior){
            maior = array[i];
            posMaior = i;
        }
    }

    //Encontre o maenor valor e sua posição
    menor = array[0];
    posMenor = 0;
    for(i = 1; i < SIZE; i++){
        if(array[i] < menor){
            menor = array[i];
            posMenor = i;
        }
    }

    //Mostrando resultados
    printf("Vetor: ");
    for(i = 0; i < SIZE; i++){
        printf("%i ", array[i]);
    }

    printf("\nMaior valor do Vetor é %i e sua posição no vetor é %i", maior, posMaior);
    printf("\nMenor valor do Vetor é %i e sua posição no vetor é %i", menor, posMenor);

}