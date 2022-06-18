#include <stdio.h>
#include <stdlib.h>

int exercicio01(void){
    double z,a,l,c = 0;
    printf("Digite o valor para A: \n");
    scanf("%lf", &a);
    printf("Digite o valor para L: \n");
    scanf("%lf", &l);
    printf("Digite o valor para C: \n");
    scanf("%lf", &c);
    z = (l+a*2.3)/c;
    printf("O valor de Z é igual a: \b");
    printf("%lf\n", z);
    return 0;
} 

int exercicio02(){
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

    
    return EXIT_SUCCESS;
}

int exercicio04(void){
   int contador = 0;
    int somatorio = 0;
    while (contador <=20){
        somatorio = somatorio + contador;
        contador++;
    }
    printf("O somatorio dos 20 primeiros numeros é %i", somatorio); 

    return 0;
}

int program_setup(void){
    int op = 0;
    printf("Digite qual opção deseja\n");
    printf("01 - Exercicio 01\n");
    printf("02 - Exercicio 02\n");
    printf("03 - Exercicio 04\n");
    printf("04 - Fim da aplicação\n");
    scanf("%i", &op);

    switch (op)
    {
        case 01:
            exercicio01();
        break;

        case 02:
            exercicio02();
        break;

        case 03:
            exercicio04();
        break;

        case 04:
            exit(0);
        break;
    }

    return 0;
}

int main(void){
    program_setup();
}