#include <stdio.h>

int main() 
{
    int cafe;
    float preco = 2.5;
    float total;
    
    printf("Quantos cafés você quer?\n");
    scanf("%d", &cafe);
    
    total = cafe*preco;
    
    printf("Você deve pagar: R$%.2f reais\n", total);
    
    return 0;
}