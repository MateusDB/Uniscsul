#include <stdio.h>
#include <math.h>

int main() {
    float horas, consumo, potencia;
    
    printf("Digite a potência do equipamento em Watts(W): \n");
    scanf("%f", &potencia);
    
    printf("Quantas horas você utiliza o equipamento por dia? \n");
    scanf("%f", &horas);
    
    consumo = (potencia*horas*30)/1000.f;
    
    printf("O consumo mensal do aparelho é de: %.2f", consumo);
   
    return 0;
}