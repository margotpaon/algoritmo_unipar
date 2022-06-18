#include<stdio.h>
int main(void){
    float celsius;
    for(float i = 40; i <= 60; i++){
        celsius = 5 * (i - 32) / 9;
        printf("A temperatura %f Fahrenheit em Celsius é = %f   \n", i,celsius);
    }
}