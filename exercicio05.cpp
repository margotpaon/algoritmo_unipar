#include<stdio.h>
int main(void)
{
  float base=0,altura=0, area=0;
  int counter = 0;
  
  do
  {
    printf("Digite o base do triangulo: ");
    scanf("%f",&base);
    printf("Digite a altura do triangulo: ");
    scanf("%f",&altura);
    
    area = (base + altura)/2;
    printf("Area do triangulo = %f\n",area);

    counter++;
    
  }while (counter < 6);
  
  return 0;
}