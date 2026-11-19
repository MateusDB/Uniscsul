#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura;
    
    printf("Digite seu peso em Kg: \n");
    scanf("%f", &peso); 
    
    printf("Digite sua altura em metros: \n");
    scanf("%f", &altura);
    
    printf("O seu Índice de Massa Corporal (IMC) é de %.2f", peso/(altura*altura));
   
    return 0;
}