#include <stdio.h>

//como as funções estão depois do main, deve-se declarar os protótipos
double media();
void aprovareprova(double med);

int main(void){
  double r;
  r = media(); 
  aprovareprova(r);
}

double media(){
    double n1,n2,n3,n4, media = 0;
    printf("\n\nPor favor digite 4 notas do aluno\n");
    printf("\n\nPrimeira nota..:");
    scanf("%lf", &n1);
    printf("\n\nSegunda nota..:");
    scanf("%lf", &n2);
    printf("\n\nTerceira nota..:");
    scanf("%lf", &n3);
    printf("\n\nQuarta nota..:");
    scanf("%lf", &n4);
    printf("\n\n\n");
    media = (n1+n2+n3+n4)/4;
    printf("A sua média foi de..: %lf", media);
    return media;
}

void aprovareprova(double med){
    if(med < 6){
    printf("\n\nInfelizmente você foi reprovado!\n");
    }else if (med >= 6){
    printf("\n\nUhul você foi aprovado nos vemos no próximo semestre!!!\n");
    }
}