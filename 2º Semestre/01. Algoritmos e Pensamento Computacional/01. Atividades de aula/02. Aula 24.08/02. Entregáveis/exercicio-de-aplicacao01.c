#include <stdio.h>
#define PI 3.14159

int main() 
{
    float raio, perimetro;
    
    printf("Qual o raio em centímetros? \n");
    scanf("%f", &raio);
    
    perimetro = 2 * PI * raio;
    
    printf("O perímetro da circunferência é: %.2fcm", perimetro);
    
    return 0;
}