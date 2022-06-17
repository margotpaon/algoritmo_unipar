#include <stdio.h>

int main(void){
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