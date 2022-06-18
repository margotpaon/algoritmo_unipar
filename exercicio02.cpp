#include <stdio.h>

int main(void){
    char gender;
    double altura, peso_ideal = 0;
    printf("Digite seu genero M para masculino ou F para feminino \n");
    scanf("%s", &gender);
    printf("Digite sua altura: \n");
    scanf("%lf", &altura);
    
    if(gender=='M'||gender=='m'){
        peso_ideal = (450.7 * altura) / 10;
        printf("O seu peso ideal deve ser %lf", peso_ideal);
    }else if (gender=='F'||gender=='f'){
        peso_ideal = (400.7 * altura) / 10;
        printf("O seu peso ideal deve ser %lf", peso_ideal);
    }


    return 0;
}